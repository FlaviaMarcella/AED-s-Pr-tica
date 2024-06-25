/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   matrizes.h
 * Author: fl-via-gon-alves
 *
 * Created on 4 de junho de 2024, 16:43
 */

#ifndef MATRIZES_H
#define MATRIZES_H

typedef int TMatriz[128][128];

void exibe_matriz(TMatriz mat, int mat1_col, int mat1_lin);
void gera_matriz(TMatriz mat, int *mat1_col, int *mat1_lin) ;
void copia_matriz(TMatriz mat1, int mat1_col, int mat1_lin, TMatriz mat2, int *mat2_col, int *mat2_lin );
void soma_matriz(TMatriz mat1, int mat1_col, int mat1_lin, TMatriz mat2, int mat2_col, int mat2_lin, TMatriz mat_resultado, int *mat_resultado_col, int *mat_resultado_lin) ;
int multi_matriz(TMatriz m1, int l1, int c1, TMatriz m2, int l2, int c2, TMatriz m3, int *l3, int *c3);
int transposta_matriz(TMatriz mat1, int mat1_col, int mat1_lin, TMatriz mat2, int *mat2_col, int *mat2_lin);
int media_matriz(TMatriz mat1, int mat1_col, int mat1_lin);

#endif /* MATRIZES_H */

