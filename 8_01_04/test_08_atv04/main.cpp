/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 1 de abril de 2024, 17:26
 */

#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

/*
 * Projeto para calcular a área total e o volume de 
 * uma cena gráfica com valores lidos de um arquivo-texto
 */
int main(int argc, char** argv) {

    float raio, lado, volume, area;
    const float pi = 3.14;
    string solido;
    
    ifstream arquivo("cenografica.txt");

    if (!arquivo.is_open()) {
        cout << "Erro: arquivo não existe" << endl;
        return 1;
    }
    
    arquivo >> solido;
    while (solido != "fim") {
        
        if (solido == "cubo") {
            
            area++;
            cout<<"area";    

        }

        

    }
    
    cout << area;
    cout << "Fim do programa;";

    
    
    return 0;
}

