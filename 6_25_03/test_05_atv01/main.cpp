/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 25 de março de 2024, 16:11
 */

#include <cstdlib>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int variavelint = 50;
    
    printf("\n\t Tipos de Variáveis e Alocação de Memória \n\n");
            
    printf("\n\t Variável inteira: \n");
    printf("\n\t\t Valor Armazenado: %d\n", variavelint);
    printf("\n\t\t Endereço na Memória: %p\n", &variavelint);
    printf("\n\t\t Quantidade em bytes: %li\n\n", sizeof(int));
    
    long int variavellongint = 50;
    
    printf("\n\t Tipos de Variáveis e Alocação de Memória \n\n");
            
    printf("\n\t Variável LongInt: \n");
    printf("\n\t\t Valor Armazenado: %d\n", variavellongint);
    printf("\n\t\t Endereço na Memória: %p\n", &variavellongint);
    printf("\n\t\t Quantidade em bytes: %li\n\n", sizeof(long int));
    
    short int variavelshortint = 50;
    
    printf("\n\t Tipos de Variáveis e Alocação de Memória \n\n");
            
    printf("\n\t Variável unsignedInt: \n");
    printf("\n\t\t Valor Armazenado: %d\n", variavelshortint);
    printf("\n\t\t Endereço na Memória: %p\n", &variavelshortint);
    printf("\n\t\t Quantidade em bytes: %li\n\n", sizeof(short int));
    
    unsigned int variavelunsignedint = 50;
    
    printf("\n\t Tipos de Variáveis e Alocação de Memória \n\n");
            
    printf("\n\t Variável ShortInt: \n");
    printf("\n\t\t Valor Armazenado: %d\n", variavelunsignedint);
    printf("\n\t\t Endereço na Memória: %p\n", &variavelunsignedint);
    printf("\n\t\t Quantidade em bytes: %li\n\n", sizeof(unsigned int));

    float variavelfloat = 50;

    printf("\n\t Tipos de Variáveis e Alocação de Memória \n\n");
            
    printf("\n\t Variável float: \n");
    printf("\n\t\t Valor Armazenado: %f\n", variavelfloat);
    printf("\n\t\t Endereço na Memória: %p\n", &variavelfloat);
    printf("\n\t\t Quantidade em bytes: %li\n\n", sizeof(float));

    double variaveldouble = 50;

    printf("\n\t Tipos de Variáveis e Alocação de Memória \n\n");
            
    printf("\n\t Variável double: \n");
    printf("\n\t\t Valor Armazenado: %f\n", variaveldouble);
    printf("\n\t\t Endereço na Memória: %p\n", &variaveldouble);
    printf("\n\t\t Quantidade em bytes: %li\n\n", sizeof(double));
    
    return 0;
}

