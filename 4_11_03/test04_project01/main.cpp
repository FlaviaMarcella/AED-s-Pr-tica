/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 11 de março de 2024, 16:10
 */

#include <cstdlib>
#include <cstdio>
#include <valarray>

using namespace std;

/*
 * 
 */int main(int argc, char** argv) {
    
    float n1 = 0;
    float n2 = 0;
    float t1 = 0;
    float mediaNota = 0;
    float mediaFinal = 0;
    
    printf("\n");
    printf("\t------------------------------- \n");
    printf("\t| Este é o 1° projeto de uma | \n");
    printf("\t|  série de projetos em C++  | \n");
    printf("\t|     Meu nome é Flávia.     | \n");
    printf("\t|   Estou no 1° periodo de   | \n");
    printf("\t|    Ciência da Computação   | \n");
    printf("\t|        na UNIFAL-MG        | \n");
    printf("\t------------------------------- \n");
    
    
    printf("\n\t------------------------------\n");
    printf("\t| AED's Prática, média: %.2f |\n",mediaFinal);
    printf("\t------------------------------\n");
    printf("\t| - APROVAÇÃO >= 6.0         |\n");
    printf("\t| - REPROVADO < 6.0          |\n");
    printf("\t------------------------------\n");
    
    printf("\n\t Entre com suas notas ");
    
    printf("\n\t NOTA I: ");
    scanf(" %f",&n1);
    
    while (n1 < 0 || n1 > 10) {

    printf("\t Valor incorreto! Digite novamente: ");
    scanf(" %f",&n1);
 
    }
    
    printf("\n\t NOTA II: ");
    scanf(" %f",&n2);
    
    while (n2 < 0 || n2 > 10) {

    printf("\t Valor incorreto! Digite novamente: ");
    scanf(" %f",&n2);
 
    }
    
    printf("\n\t Trabalho I: ");
    scanf(" %f",&t1);
    
    while (t1 < 0 || t1 > 10) {

    printf("\t Valor incorreto! Digite novamente: ");
    scanf(" %f",&t1);
 
    }
    
    mediaFinal = (n1+n2+t1)/3;

    if (mediaFinal >= 6.0) {
        
    printf("\t------------------------------\n");
    printf("\t| - Parábens, aprovado       |\n");
    printf("\t------------------------------\n");
        

    } if (mediaFinal < 6.0) {
        
    printf("\t------------------------------\n");
    printf("\t Que pena...você foi reprovado\n");
    printf("\t------------------------------\n");    

    }



    return 0;
}
