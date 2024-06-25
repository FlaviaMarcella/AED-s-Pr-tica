/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   matrizes.cpp
 * Author: fl-via-gon-alves
 *
 * Created on 4 de junho de 2024, 16:33
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
 */

void exibe_matriz(TMatriz mat, int mat1_col, int mat1_lin) {

    cout << "\t ----------" << endl;

    for (int i = 0; i < mat1_lin; i++) {
        
        cout << "\n\t ";
        
        for (int j = 0; j < mat1_col; j++) {
            cout << " " << mat[i][j];

        }
        cout << endl;
    }

    cout << "\t ----------" << endl;

}

void gera_matriz(TMatriz mat, int *mat1_col, int *mat1_lin) {

    cout << "\n\t Qual o tamanho da matriz, " << endl;
    cout << "\n\t Linhas: ";
    cin >> *mat1_lin;
    cout << "\n\t Colunas: ";
    cin >> *mat1_col;

    for (int i = 0; i < *mat1_lin; i++) {
        for (int j = 0; j < *mat1_col; j++) {
            mat[i][j] = (rand() % 10);
        }
    }
}

void soma_matriz(TMatriz mat1, int mat1_col, int mat1_lin, TMatriz mat2, int mat2_col, int mat2_lin, TMatriz mat_resultado, int *mat_resultado_col, int *mat_resultado_lin) {

    int i, j;

    for (i = 0; i < *mat_resultado_lin; i++) {
        for (j = 0; j < *mat_resultado_col; j++) {
            mat_resultado[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    *mat_resultado_lin = i;
    *mat_resultado_col = j;

}

int multi_matriz(TMatriz m1, int l1, int c1, TMatriz m2, int l2, int c2, TMatriz m3, int *l3, int *c3) {

    if (c1 = !l2) {
        cout << "\n\t Não é possível multiplicar as matrizes";
        return 1;
    }

    *l3 = l1;
    *c3 = c2;
    int termo = 0;

    for (int k = 0; k < *c3; k++) {

        for (int i = 0; i < l1; i++) {

            termo = 0;

            for (int j = 0; j < c2; j++) {
                m3[k][i] += m1[k][j] * m2[j][i];
            }

        }
    }

    return 0;

}

int transposta_matriz(TMatriz mat1, int mat1_col, int mat1_lin, TMatriz mat2, int *mat2_col, int *mat2_lin) {

    for (int i = 0; i < mat1_lin; i++) {
        for (int j = 0; j < mat1_col; j++) {

            mat2[i][j] = mat1[j][i];
            mat2[j][i] = mat1[i][j];

        }
    }

    *mat2_col = mat1_lin;
    *mat2_lin = mat1_col;

    return 0;

}

int media_matriz(TMatriz mat1, int mat1_col, int mat1_lin) {

    int media, cont;

    for (int i = 0; i < mat1_lin; i++) {
        for (int j = 0; j < mat1_col; j++) {

            media += mat1[i][j];

        }
    }
    
    cont = mat1_lin*mat1_col;
    media = media / cont;

    return media;

}

