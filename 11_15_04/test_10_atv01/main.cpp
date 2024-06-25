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
 *  d) inverter os valores do vetor *sem criar um novo
 *  e) retirar do vetor, todas as ocorrências de um valor inserido
 *  f) retirar todos os valores repetidos
 * 
 *  IMPORTANTE: usar um menu, opção
 * Created on 15 de abril de 2024, 16:11
 */

#include <cstdlib>
#include <time.h>
#include <string>
#include <iostream>
#include <locale>
#include <complex>
#include <math.h>
#include <list>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int TAM = 10;
    int i, j, k, cont, opcao, entradaI, entradaII;
    //float consulta[TAM];
    std::string posicao = "";
    float consulta[TAM] = {188, 190, 113, 152, 150, 113, 147, 113, 167, 113};

    cont = 0;
    j = 0;
    k = 0;

    cout << "\t Gerando numeros aleatorios" << endl;
    cout << "\t            ..." << endl;
    cout << "\t            ..." << endl;
    cout << "\t            ..." << endl;
    cout << "\n\t ";


    srand(time(NULL));

    for (i = 0; i < TAM; i++) {

        //consulta[i] = (100 + rand() % 100);

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
    cout << "\n\t 4 - Inverter os valores, do vetor "
            "\n\t               *Sem criar um novo" << endl;
    cout << "\n\t 5 - Excluir todas as ocorrências "
            "\n\t     de um valor X" << endl;
    cout << "\n\t 6 - Excluir todas as ocorrências "
            "\n\t     repetidas" << endl;
    cout << "\n\t-------------------------------" << endl;

    cout << "\n\t Entre com a opção desejada: ";
    cin >> opcao;

    switch (opcao) {

        case 1:

            cout << "\n\t Qual número, você deseja pesquisar? ";
            cin >> entradaI;

            for (i = 0; i < TAM; i++) {

                //cout << "vetor[Consulta]: " << consulta[i] << endl;

                if (consulta[i] == entradaI) {

                    cout << "\t pos: " << i << endl;
                    j++;
                } 
            }

            if (j == 0) {

                cout << "\n\t O numero " << entradaI << " não foi encontrado.";

            }

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

        case 4:

            cont = TAM - 1;
            for (i = 0; i < TAM / 2; i++) {

                entradaII = consulta[i];
                consulta[i] = consulta[cont];
                consulta[cont] = entradaII;

                cont--;

            }

            cout << "\t ";

            for (i = 0; i < TAM; i++) {
                cout << consulta[i] << ",";

            }

            break;

        case 5:

            cout << "\n\t Qual número, você deseja deletar? ";
            cin >> entradaI;

            for (i = 0; i < TAM; i++) {

                if (consulta[i] == entradaI) {
                    cont = i;
                    j++;

                    while (cont < TAM) {

                        consulta[cont] = consulta[cont + 1];
                        cont++;

                    }

                }
            }

            cout << "\n\t ";

            for (i = 0; i < TAM - j; i++) {
                cout << consulta[i] << ",";

            }

            break;

        case 6:
            for (i = 0; i < TAM + k; i++) {

                entradaI = consulta[i];
                //cout << "\n\t cons: " << entradaI << endl;

                for (j = i + 1; j < TAM + k; j++) {

                    if (entradaI == consulta[j]) {
                        cont = j;
                        k--;
                        while (cont < TAM + k) {

                            consulta[cont] = consulta[cont + 1];
                            cont++;

                        }
                    }

                }

            }

            cout << "\n\t ";

            for (i = 0; i < TAM + k; i++) {
                cout << consulta[i] << ",";

            }

            break;

        default: cout << "\n\t Opção inserida, é inválida!";

            return 0;
    }

}