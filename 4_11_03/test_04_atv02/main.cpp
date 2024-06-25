/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 11 de março de 2024, 16:50
 */

/*Faça um programa para calcular a média de alturas de um grupo de 10 pessoas*/

#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i = 0;
    float ph = 0 ;
    float sh = 0 ;

    printf("\t Bem-vindo! \n\n");

    sh = sh + ph;

    while (i < 10) {
        
        i++;
        cout<<"\t Insira a  "<< i << "° altura: ";
        cin >> ph;
        
        sh = sh + ph;

        
    }
    
    sh = sh/10;
    cout<<"\n\t A média das alturas digitadas foi " << sh ;

    return 0;
}

