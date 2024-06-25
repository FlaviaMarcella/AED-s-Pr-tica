/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 26 de março de 2024, 17:02
 */

/*Gerar 1000 numeros do tipo float, aleatorios entre 0 e 200*/
/*calcular a media*/

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int i;
    float segredo,media;
    
    i = 0;
    
    cout<<"\t Gerando numeros aleatorios"<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\t            ..."<<endl;
    
    srand(time(NULL));
    
    while (i != 1000) {
        
        segredo = (1.00 + rand()%100.00)*2.00;
        cout <<segredo<<", ";
        media = media + segredo;
        i++;

    }
    
    media = media/i;
    cout<<"\t A media dos valores e: "<<segredo<<endl;
    
    
    
    return 0;
}

