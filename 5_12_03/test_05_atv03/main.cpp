/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 12 de março de 2024, 17:19
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "\t ------------------------------------ \n";
    cout << "\t Vamos descobrir, qual seu triângulo? \n";
    cout << "\t ------------------------------------ \n";
    cout << "\t  Equilátero - 3 lados iguais         \n";
    cout << "\t  Isósceles  - 2 lados iguais         \n";
    cout << "\t  Escaleno - todos os lados diferentes\n";
    cout << "\t ------------------------------------ \n";

    float l1 = 0;
    float l2 = 0;
    float l3 = 0;

    cout << "\n\t Entre com o 1° lado: ";
    cin >> l1;
    cout << "\n\t Entre com o 2° lado: ";
    cin >> l2;
    cout << "\n\t Entre com o 3° lado: ";
    cin >> l3;
    cout << "\n\t ------------------------------------ \n";
    
    if ((l1 + l2 < l3) || (l2 + l3 < l1) || (l3 + l2 < l1) || (l3 + l1 < l2)) {

        cout << "\t Isto não é um triângulo";

    } else {
        
        if ((l1*l1 + l2*l2 == l3*l3) || (l2*l2 + l3*l3 == l1*l1) || (l3*l3 + l2*l2 == l1*l1) || (l3*l3 + l1*l1 == l2*l2)) {
            
            cout << "\t Isto é um triângulo-retângulo \n";

        }


        if (l1 == l2 || l2 == l3) {

            if (l1 == l2 && l2 == l3) {

                cout << "\t Triângulo equilátero \n";

            }else{

                cout << "\t Triângulo Isósceles \n";

            }


        } else {

            cout << "\t Triângulo Escaleno \n";

        }

    }

    return 0;
}

