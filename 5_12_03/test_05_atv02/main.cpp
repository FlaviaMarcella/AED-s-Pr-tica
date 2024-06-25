/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 12 de março de 2024, 16:40
 */
/*Faça um programa para calcular a média de alturas de um grupo de pessoas,
 e deve interromper seu funcionamento quando a altura for menor ou igual a 0*/

#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i = 0;
    float ph = 0;
    float sh = 0 ;

    cout<<"\t -------------------- \n";
    cout<<"\t Bem-vindo! \n";
    cout<<"\t -------------------- \n";
    cout<<"\t Para sair, insira 0; \n";
    cout<<"\t -------------------- \n";
    
    i++;
    cout<<"\t Insira a  "<< i << "° altura: ";
    cin >> ph;
        
    while (ph > 0) {
        
        i++;
        cout<<"\t Insira a  "<< i << "° altura: ";
        cin >> ph;
        
        sh = sh + ph;

        
    }
    
    sh = sh/i;
    cout<<"\n\t A média das alturas digitadas foi " << sh ;

    return 0;
}

