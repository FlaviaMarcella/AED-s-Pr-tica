/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * realizar as seguintes buscas dentro de um vetor, gerado por números inteiros aleatorios
 *  a) informar se um valor existe no vetor, e qual sua posição
 *  b) contar quantas vezes um valor aparece num vetor e quais suas posições
 *  c) contas quantas vezes os valores dentro de um intervalo aparecem no vetor
 * 
 *  IMPORTANTE: usar um menu, opção
 * 
 * Created on 9 de abril de 2024, 17:20
 */
#include <cstdlib>
#include <time.h>
#include <string>
#include <iostream>
#include <locale>
#include <complex>
#include <math.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int TAM = 100;
    int i, cont, opcao, entradaI, entradaII;
    float consulta[TAM];
    std::string posicao = "";

    cont = 0;

    cout << "\t Gerando numeros aleatorios" << endl;
    cout << "\t            ..." << endl;
    cout << "\t            ..." << endl;
    cout << "\t            ..." << endl;
    cout << "\n\t ";


    srand(time(NULL));

    for (i = 0; i < TAM; i++) {

        consulta[i] = (100 + rand() % 100);

        if (i % 5 == 0) {

            cout << "\n\t ";

        }

        if (i != TAM - 1) {

            cout << consulta[i] << ", ";
        }

        if (i == TAM - 1) {
            cout << consulta[i];
        }

    }

    cout << "\n\t-------------------------------" << endl;
    cout << "\t Funções" << endl;
    cout << "\n\t 1 - Informar se o valor inserido, "
            "\n\t     existe e qual sua posição." << endl;
    cout << "\n\t 2 - Informar quantas vezes o valor "
            "\n\t     aparece, e suas posições." << endl;
    cout << "\n\t 3 - Informar quantas valores, que "
            "\n\t     estão dentro de um intervalo," << endl;
    cout << "\n\t-------------------------------" << endl;

    cout << "\n\t Entre com a opção desejada: ";
    cin >> opcao;

    switch (opcao) {

        case 1:

            cout << "\n\t Qual número, você deseja pesquisar? ";
            cin >> entradaI;

            for (i = 0; i < TAM; i++) {


                if (consulta[i] == entradaI) {

                    posicao = std::to_string(i + 1) + posicao;
                    cout << "\t O numero " << entradaI << " existe, foi encontrado na posição " << posicao;
                }

            }

            /*if (consulta[i] == entradaI) {

                cout << "\t O numero " << entradaI << " existe, foi encontrado na posição " << posicao;

            } else {

                cout << "\t O numero " << entradaI << " não foi encontrado.";
            }*/

            break;

        case 2:


            cout << "\n\t Qual número, você deseja pesquisar? ";
            cin >> entradaI;

            for (i = 0; i < TAM; i++) {


                if (consulta[i] == entradaI) {

                    cont++;

                    posicao = std::to_string(i) + ", " + posicao;

                }

            }

            if (cont != 0) {

                cout << "\t O numero " << entradaI << " foi encontrado " << cont << " vezes, nas posições: " << posicao;
            } else {

                cout << "\t O numero " << entradaI << " não foi encontrado.";
            }
            break;

        case 3:


            cout << "\n\t Qual intervalo, você deseja pesquisar? ";
            cout << "\n\t Menor valor: ";
            cin >> entradaI;

            cout << "\n\t Maior valor: ";
            cin >> entradaII;

            for (i = 0; i < TAM; i++) {


                if (consulta[i] >= entradaI && consulta[i] <= entradaII) {

                    cont++;

                }

            }

            cout << "\t Foram encontrados " << cont << " números, entre o intervalo " << entradaI << " e " << entradaII;

            break;

        default: cout << "\n\t Opção inserida, é inválida!";
    }

    return 0;
}

