/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 4 de março de 2024, 16:15
 */

/*Projeto para calcular a área total e o volume de um cilindro*/

#include <cstdlib>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float pi = 3.14159265359;
    float r = 0;
    float h = 0;
    float area = 0;
    float volume = 0;
    
    printf("\n");
    printf("\t------------------------------- \n");
    printf("\t| Este é o 1° projeto de uma | \n");
    printf("\t|  série de projetos em C++  | \n");
    printf("\t|     Meu nome é Flávia.     | \n");
    printf("\t|   Estou no 1° periodo de   | \n");
    printf("\t|    Ciência da Computação   | \n");
    printf("\t|        na UNIFAL-MG        | \n");
    printf("\t------------------------------- \n");
    
    printf("\n\t Entre com os seguintes dados ");
    
    printf("\n\t Raio(cm): ");
    scanf(" %f",&r);
    
    while (r <= 0) {
        
        printf("Dados incorretos, entre novamente: ");
        scanf(" %f",&r);

    }

    
    printf("\t Altura(m): ");
    scanf(" %f",&h);
    
    while (h <= 0) {
        
        printf("Dados incorretos, entre novamente: ");
        scanf(" %f",&h);

    }
    
    area = (2*pi*r*h) + 2*pi*(r*r);
    volume = pi*(r*r)*h;
    
    printf("\n\t------------------------------\n");
    printf("\t|          Cilindro          |\n");
    printf("\t------------------------------\n");
    printf("\t| - Área = %.2f cm²             |\n",area);
    printf("\t| - Volume = %.2f cm³            |\n",volume);
    printf("\t------------------------------\n");

    return 0;
}

