/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 12 de março de 2024, 16:03
 */

/*Construir uma tabela na tela, relacionando graus Celsius com graus Fahrenheit*/

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float celc = 0 ;
    float far = celc * 1.8 + 32;
    
    cout << "\t ------------------------------------ \n";
    cout << "\t Tabela de Graus Celsius x Fahrenheit \n";
    cout << "\t ------------------------------------ \n";    
    cout << "\t    Celcius (C°) -  Fahrenheit (F°) \n";
    
    
    while (celc <= 100.0) {
    
    cout << "\t    "<<celc<<"(C°) \t - \t   "<<far<<" (F°) \n";
    
    celc = celc + 5.0;
    far = celc * 1.8 + 32;

    }
    return 0;
}

