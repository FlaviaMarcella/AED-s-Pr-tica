
/* 
 * File:   ordenacao.cpp
 * Author: fl-via-gon-alves
 * 
 * Descrição: biblioteca com algoritmos de ordenação
 *
 * Created on 3 de junho de 2024, 16:19
 */

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

void exibe_vetor(int v[], int tam) {

    cout << "\n\t ";

    for (int i = 0; i < tam; i++) {
        cout << v[i] << " ,";
    }

    cout << endl;

}
//implement algoritm bubble sort
void bubble_sort(int v[], int tam) {

    int aux = 0;
    int x[tam];

    for (int i = 0; i < tam; i++) {
        x[i] = v[i];
    }

    cout << "\n\t Vetor x: ";
    exibe_vetor(x, tam);


    for (int i = tam; i > 0; i--) {

        for (int k = 0; k < i - 1; k++) {
            if (x[k] > x[k + 1]) {
                aux = x[k];
                x[k] = x[k + 1];
                x[k + 1] = aux;
            }
        }

    }

    cout << "\n\t Vetor x ordenado: ";
    exibe_vetor(x, tam);

    cout << endl;

}

//implement algoritm insertion sort
void insertion_sort(int v[], int tam) {

    int aux = 0;

    int y[tam];

    for (int i = 0; i < tam; i++) {
        y[i] = v[i];
    }

    cout << "\n\t Vetor y: ";
    exibe_vetor(y, tam);

    for (int i = 1, k = 0; i < tam; i++) {

        aux = y[i];
        k = i - 1;

        while (k >= 0 && y[k] > aux) {

            y[k + 1] = y[k];
            k = k - 1;

        }

        y[k + 1] = aux;

    }

    cout << "\n\t Vetor y ordenado: ";
    exibe_vetor(y, tam);

    cout << endl;

}

//implement algoritm selection sort
void selection_sort(int v[], int tam) {

    int aux = 0, min;

    int z[tam];

    for (int i = 0; i < tam; i++) {
        z[i] = v[i];
    }

    cout << "\n\t Vetor z: ";
    exibe_vetor(z, tam);

    for (int i = -1; i < tam; i++) {

        min = i;
        aux = z[i];

        for (int k = i + 1; k < tam; k++) {
            if (z[k] < aux) {
                min = k;
                aux = z[k];
            }
        }

        aux = z[i];
        z[i] = z[min];
        z[min] = aux;

    }

    cout << "\n\t Vetor z ordenado: ";
    exibe_vetor(z, tam);

    cout << endl;

}

//exibe vetor


