/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 * * 

 * inicializar todos os espaço com -1
 * iniciar com 0, em alguma posição aleatória
 * a aleatóriedade está em que posição está   * 
 * 
* 
sendo gerada para guardar 
 * certo número, e essa aleatoridade é a soma da posição anterior (i) + a nova posição sorteada (n),
 * ao chegar em certo nivel de preenchimento devemos optra por escolher o proximo espçao ou anterior,
 * para armazenar um novo valor;
 * Para verificar se um espaço está ocupado ou não, devemos verificar se está preenchido com outro
 * número diferente de -1, uma vez que -1 representar um vetor vazio;
 * 
 * 
 * verificar condição do else
 * Created on 20 de maio de 2024, 16:17
 */

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

const int TAM = 100;

/*
 * 
 */

void exibe_vetor(int v[], int tam) {

    ofstream arquivo_saida("aleatorio.txt");

    for (int y = 0; y < tam; y++) {

        arquivo_saida << v[y] << " ";
        
        if (y % 10 == 0) {
            cout << "\n\t ";
        }

        cout << " " << v[y] << ", ";


    }
    
    arquivo_saida.close();

}

int main() {

    int vector_aleat[TAM];
    int a=0;

    //tornando as posições zeradas
    for (int i = 0; i < TAM; i++) {
        vector_aleat[i] = i;
    }

    srand(time(NULL));

    for (int i = 0, j = 0, z = TAM, aux = 0; i < TAM; i++) {
        j=rand() % z;
        aux = vector_aleat[i];
        vector_aleat[i]=vector_aleat[j];
        vector_aleat[j]=aux;
    }

    cout << "\n\t a: " << a;
    cout << "\n\t ";
    exibe_vetor(vector_aleat, TAM);

    return 0;
}

