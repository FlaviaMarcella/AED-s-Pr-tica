/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * Created on 27 de maio de 2024, 17:17
 */

#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include "ordenacao.h"

using namespace std;

/*
 * 
 */

const int TAM = 10;

int opcao() {
    
    int resp = -1;

    cout << "\n\t Menu";

    cout << "\n\t 1 - Bubble Sort";
    cout << "\n\t 2 - Insertion Sort";
    cout << "\n\t 3 - Selection Sort";
    cout << "\n\t 0 - Sair" << endl;

    cout << "\n\t Opção: ";
    cin >> resp;
    cout << endl;

    return resp;
}

int main() {

    int vetor[TAM] = {8, 6, 5, 2, 9, 1, 3, 5, 7, 6};
    int opc = -1;

    do {

        opc = opcao();

        switch (opc) {

            case 0:
                cout << "\n\t Opção selecionada: Sair";
                break;

            case 1:
                cout << "\n\t Algoritm Bubble Sort \n";
                bubble_sort(vetor, TAM);
                break;

            case 2:
                cout << "\n\t Algoritm Insertion Sort \n";
                insertion_sort(vetor, TAM);
                break;

            case 3:
                cout << "\n\t Algoritmo Selection Sort \n";
                selection_sort(vetor, TAM);
                break;

            default:
                cout << "\n\t Opção inválida!";
                break;

        }
    } while (opc != 0);

    return 0;
}

