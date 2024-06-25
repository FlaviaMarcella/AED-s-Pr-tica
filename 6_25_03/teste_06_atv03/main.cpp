/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 25 de março de 2024, 17:16
 */

#include <cstdlib>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    unsigned char codigoASCII;
    
    printf("\t Tabela ASCII : \n");
    
    codigoASCII = 0;
    while (codigoASCII < 255) {
        printf("\t\t Caracter: %c", codigoASCII);
        printf("\t\t Caracter: %d", codigoASCII);
        printf("\n");
        codigoASCII++;
    }


    return 0;
}

