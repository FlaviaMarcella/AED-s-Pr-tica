/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 26 de março de 2024, 16:18
 */

/*Este projeto deve gerar um numero aleatorio*/
/*Pedir ao usuario que insira um valor ate que o numero gerado seja igual ao chute*/
/*A cada chute, informe ao usuario se este numero e maior ou menor que o gerado*/
/*ADICIONAL: FAZER UM CONTADOR DE TENTATIVAS*/

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int segredo, chute, cont;
    
    cout<<"\t Gerando numero aleatorio"<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\t            ..."<<endl;
    cout<<"\t            ..."<<endl;
    
    srand(time(NULL));
    segredo = 1 + rand()%100;
       
    cout<<"\t Numero gerado com sucesso! \n";
    cout<<"\t O valor gerado e: "<<segredo<<endl;
    cout<<"\n\t Por favor, insira seu chute \n\t que deve ir \n\t de 1 ... 100:";
    cin >> chute;
    
    cont = 1;
    
    while (chute != segredo) {
        
        cont++;
        
        if (chute > segredo) {
            
            cout << "\n\t O segredo e menor que "<<chute;

        }else{
            
            cout << "\n\t O segredo e maior que "<<chute;    

        }

        cout << "\n\t Tente novamente: ";
        cin >> chute;
    }
    
    cout<<"\n\t Parabens, o  numero inserido e igual ao numero gerado!" << endl;
    cout<<"\t Voce gastou "<<cont<<" tentativas, para adivinhar!";
    cout<<"\n\t O valor inserido e: "<<chute<<" | ";
    cout<<"O valor gerado e: "<<segredo<<endl;
    
    
    
    
    
    return 0;
}

