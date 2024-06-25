/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 1 de abril de 2024, 16:18
 */

#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ifstream arquivo("entrada.txt");
    
    //input de dados, através o "i" em Ifstream
    
    if (!arquivo.is_open()) {
        cout <<"Erro: arquivo não existe"<<endl;
        return 1;
    }


    return 0;
}

