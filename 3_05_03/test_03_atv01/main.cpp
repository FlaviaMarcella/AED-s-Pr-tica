/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 5 de março de 2024, 16:24
 */

#include <cstdlib>
#include <cstdio>
#include <valarray>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float p = 0;
    float h = 0;
    float imc = 0;
    
    printf("\n");
    printf("\t----------------------------------------------\n");
    printf("\t|             Este projeto é uma             | \n");
    printf("\t|             calculadora de IMC             | \n");
    printf("\t----------------------------------------------\n");
    printf("\t|             Meu nome é Flávia.             | \n");
    printf("\t|           Estou no 1° periodo de           | \n");
    printf("\t|           Ciência da Computação            | \n");
    printf("\t|                na UNIFAL-MG                | \n");
    printf("\t----------------------------------------------\n");
    
    printf("\n\t Entre com os seguintes dados ");
    
    printf("\n\t Peso(kg): ");
    scanf(" %f",&p);
    
    while (p <= 0) {
        
        printf("Dados incorretos, entre novamente: ");
        scanf(" %f",&p);

    }
    
    printf("\t Altura(m): ");
    scanf(" %f",&h);
    
    while (h <= 0) {
        
        printf("Dados incorretos, entre novamente: ");
        scanf(" %f",&h);

    }
        
    imc = p / (h*h);
    
    printf("\n\t----------------------------------------------\n");
    printf("\t|          Índice de Massa Corporal          |\n");
    printf("\t----------------------------------------------\n");
    printf("\t| Menor que 16.9 \t Muito abaixo do Peso|\n");
    printf("\t| 17.0 a 18.4 \t\t Abaixo do Peso      |\n");
    printf("\t| 18.5 a 24.9 \t\t Peso normal         |\n");
    printf("\t| 25.0 a 29.9 \t\t Acima do Peso       |\n");
    printf("\t| 30.0 a 34.9 \t\t Obesidade grau I    |\n");
    printf("\t| 35.0 a 40.0 \t\t Obesidade grau II   |\n");
    printf("\t| Maior que 40.0 \t Obesidade grau III  |\n");
    printf("\t----------------------------------------------\n");
    printf("\t| - Peso (Kg) = %.2f kg                     |\n",p);
    printf("\t| - Altura (m) = %.2f m                      |\n",h);
    printf("\t| - IMC = %.2f                              |\n",imc);
    printf("\t----------------------------------------------\n");
    
    if (imc < 17.0) {
        
        printf("\t| Procure um especilista, você está: \n");
        printf("\t| Menor que 16.9 \t Muito abaixo do Peso|\n");

    }if(imc >= 17.0 && imc < 18.5){
        
        printf("\t| Procure um especilista, você está: \n");
        printf("\t| 17.0 a 18.4 \t\t Abaixo do Peso      |\n");
        
    }if(imc >= 18.5 && imc < 25.0){
    
        printf("\t| Continue assim, você está: \n");
        printf("\t| 18.5 a 24.9 \t\t Peso normal         |\n");

    }if(imc >= 25.0 && imc < 30.0){
        
        printf("\t| Procure um especilista, você está: \n");
        printf("\t| 25.0 a 29.9 \t\t Acima do Peso       |\n");
        
    }if(imc >= 30.0 && imc < 35.0){
        
        printf("\t| Procure um especilista, você está: \n");
        printf("\t| 30.0 a 34.9 \t\t Obesidade grau I    |\n");
    }if(imc >= 35.0 && imc < 40.0){
        
        printf("\t| Procure um especilista, você está: \n");
        printf("\t| 35.0 a 40.0 \t\t Obesidade grau II   |\n");
    }else if(imc >= 40.0){
        printf("\t| Procure um especilista, você está: \n");
        printf("\t| Maior que 40.0 \t Obesidade grau III  |\n");
    }


    return 0;

}

