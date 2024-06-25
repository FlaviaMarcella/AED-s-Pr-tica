/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * Created on 4 de junho de 2024, 16:32
 */

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <fstream>
#include <locale>
#include "matrizes.h"

using namespace std;

/*
 * 
 * O projeto cria 2 matrizes aleatórias conforme as linhas e colunas que o usuário insere, o projeto encontra a transposta de uma matriz, soma as duas matrizes,
 * multiplica as matrizes e por fim calcula a média de uma das matrizes, armazenando o resultado das matrizes em uma nova.
 * 
 */

int opcao() {
    
    int opc;

    cout << "\n\t Menu" << endl;
    cout << "\n\t 1 - Gerar matrizes" << endl;
    cout << "\n\t 2 - Exibir matrizes" << endl;
    cout << "\n\t 3 - Matriz Transposta" << endl;
    cout << "\n\t 4 - Soma de Matrizes" << endl;
    cout << "\n\t 5 - Multiplicação de Matrizes" << endl;
    cout << "\n\t 6 - Média das Matrizes" << endl;

    cout << "\n\t Opção: ";
    cin >> opc;
    
    return opc;


}

int main() {

    TMatriz mat_1;
    TMatriz mat_2;
    TMatriz mat_resultado;

    int l_1, c_1;
    int l_2, c_2;
    int l_3, c_3;
    
    int resp;

    srand(time(NULL));

    do {
        
        resp = opcao();

        switch (resp) {

            case 1:

                cout << "\n\t Matriz 1";
                gera_matriz(mat_1, &l_1, &c_1);

                cout << "\n\t Matriz 2";
                gera_matriz(mat_2, &l_2, &c_2);

                break;
            case 2:
                cout << "\n\t Matriz 1: " << endl;
                exibe_matriz(mat_1, l_1, c_1);

                cout << "\n\t Matriz 2: " << endl;
                exibe_matriz(mat_2, l_2, c_2);

                break;
            case 3:
                transposta_matriz(mat_1, l_1, c_1, mat_resultado, &l_3, &c_3);

                cout << "\n\t Matriz Transposta: " << endl;
                exibe_matriz(mat_resultado, l_3, c_3);

                break;
            case 4:
                soma_matriz(mat_1, l_1, c_1, mat_2, l_2, c_2, mat_resultado, &l_3, &c_3);

                cout << "\n\t Matriz Somada: " << endl;
                exibe_matriz(mat_resultado, l_3, c_3);
                break;
            case 5:
                multi_matriz(mat_1, l_1, c_1, mat_2, l_2, c_2, mat_resultado, &l_3, &c_3);

                cout << "\n\t Matriz Multiplicada: " << endl;
                exibe_matriz(mat_resultado, l_3, c_3);
                break;
            case 6:
                cout << "\n\t Média matriz: " << media_matriz(mat_1, l_1, c_1);

                break;

        }
    } while (resp != 0);



    return 0;

}

