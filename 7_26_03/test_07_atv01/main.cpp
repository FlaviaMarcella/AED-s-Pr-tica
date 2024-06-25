/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 26 de março de 2024, 16:04
 */

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <locale>

using namespace std;

/*Gerar 1000 valores do tipo float que estejão entre 1.5 e 2.3*/
/*Calcule a média*/
/*Calcule o desvio-padrão*/
/*Encontrar a maior altura*/
/*encontrar a menor altura*/
/*Encontrar a porcentagem de pessoas maiores que 2,0 metros*/

/*
 * 
 */
int main(int argc, char** argv) {

    int i;
    float alturas,media;
    
    alturas = 0.0;
    i = 0;
    
    cout<<"\t Gerando alturas aleatorias"<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\t            ..."<<endl;
    
    srand(time(NULL));
    
    while (i != 1000) {
        
        alturas = (1500+rand()%700);
        alturas = alturas/1000;
        cout <<alturas<<", ";
        media = media + alturas;
        i++;

    }
    
    media = media/i;
    cout<<"\n\t A media das alturas e: "<<alturas<<endl;
    
    
    
    return 0;
}

