/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 09 de abril de 2024, 16:16
 */

/*Gerar 1000 numeros do tipo float, aleatorios entre 0 e 200*/
/*calcular a media*/

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <locale>
#include <complex>
#include <math.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int TAM = 5;
    int i,cont;
    float altura[TAM],media, desvPadrao, mediaDesvPadrao;
    
    desvPadrao = 0;
    mediaDesvPadrao = 0;
    media = 0;
    cont = 0;
    
    cout<<"\t Gerando numeros aleatorios"<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\n\t ";
    
    srand(time(NULL));
    
    for(i = 0; i < TAM; i++) {
        
        altura[i] =  (1.00 + rand()%100)*2.00;
        cout <<altura[i]<<", ";
        media += altura[i];


    }
    
    media = media/TAM;
    
    for(i = 0; i < TAM; i++){
        
        
        if (altura[i] > media) {
            
            cont++;

        }
      
        desvPadrao = pow((media - altura[i]),2);
        mediaDesvPadrao = mediaDesvPadrao + desvPadrao;

    }

    mediaDesvPadrao = mediaDesvPadrao / TAM;
    desvPadrao = sqrt(mediaDesvPadrao);    
    
    cout<<"\n\n\t A media dos valores e: "<<media<<endl;
    cout<<"\n\t O desvio-padrão é: "<<desvPadrao<<endl;
    cout<<"\n\t Foram gerados: "<<cont<<" alturas maiores que a media "<<endl;
    
    
    
    return 0;
}

