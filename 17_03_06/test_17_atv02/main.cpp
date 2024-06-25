/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * Criar 2 matrizes
 * ler cada uma delas
 * somar a 1° com a 2°, armazenar o resultado na 3°
 * 
 * Created on 3 de junho de 2024, 17:12
 */

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

/*
 * 
 */

const int TAM = 5;

void exibe_matriz (int mat[][], int tam) {
    
    cout << "------------------" << endl;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << " " << mat[i][j];

            if (j == 4) {
                cout << " " << mat[i][j] << endl;
            }
        }
    }
    
    cout << "------------------" << endl;

}

int main() {

    int mat_1[TAM][TAM];
    int mat_2[TAM][TAM];
    int mat_resultado[TAM][TAM];

    int x = 0, y = 0;
    
    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            mat_1[i][j] = (rand() % 100);
            mat_2[i][j] = (rand() % 100);
            
            mat_resultado[i][j] = mat_1[i][j] + mat_2[i][j];
        }
    }

    exibe_matriz(mat_1, TAM);
    cout << "------------------" << endl;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << " " << mat_1[i][j];

            if (j == 4) {
                cout << " " << mat_1[i][j] << endl;
            }
        }
    }


    //exibe_matriz(mat_2, TAM);

    cout << "------------------" << endl;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << " " << mat_2[i][j];

            if (j == 4) {
                cout << " " << mat_2[i][j] << endl;
            }

        }
    }

    cout << "------------------" << endl;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << " " << mat_resultado[i][j];

            if (j == 4) {
                cout << " " << mat_resultado[i][j] << endl;
            }

        }
    }


    return 0;
}

