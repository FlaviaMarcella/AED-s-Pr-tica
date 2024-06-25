/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * Roteiro:
        criar um projeto novo; 
        criar 2 vetores de 10 números inteiros, com valores repetidos em cada um;
        remover os valores repetidos de cada um deles;
        implementar a operação de união entre eles;
        implementar a operação de intersecção entre eles;
        melhorar as operações acima para que elas sejam o mais simples e rápido possível.
 * Created on 23 de abril de 2024, 19:13
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

void exib_vetor(int t, int c[]) {

    int i;

    i = 0;
    cout << "\n\t ";

    for (i = 0; i < t; i++) {
        cout << c[i] << ",";

    }

}

void rem_rep(int *t, int c[]) {

    int i = 0, j = 0, k = 0;

    for (i = 0; i < *t + k; i++) {

        for (j = i + 1; j < *t + k; j++) {

            if (c[i] == c[j]) {

                for (int cont = j; cont < *t + k; cont++) {
                    c[cont] = c[cont + 1];
                }

                k--;
            }

        }

    }

    *t += k;

}

int main(int argc, char** argv) {

    int c_1[10] = {5, 4, 2, 5, 3, 2, 4, 8, 2, 9};
    int c_2[10] = {7, 1, 12, 10, 9, 2, 8, 1, 2, 7};
    int c_u[15];
    int c_i[10];

    int t_1, t_2, i, j, k, n, x,t_u;

    t_1 = 10;
    t_2 = 10;
    i = 0;
    j = 0;
    k = 0;

    cout << "Operações em conjuntos de valores." << endl;

    cout << "\n\t Vetor I, sem repetição: ";
    rem_rep(&t_1, c_1);
    exib_vetor(t_1, c_1);
    cout << "\n\n\t Vetor II, sem repetição: ";
    rem_rep(&t_2, c_2);
    exib_vetor(t_2, c_2);
    
    /*do {
        c_u[i] = c_1[i];
        i++;
    } while (i < t_1);


    do {
        c_u[i] = c_2[j];
        i++;
        j++;
    } while (i < t_1 + t_2);

    cout << "\n\n\t Vetor I em união com II: ";
    rem_rep(&i, c_u);

    k = 0;

    for (i = 0; i < t_1; i++) {

        for (j = i - 1; j < t_2; j++) {

            if (c_1[i] == c_2[j]) {

                c_i[k] = c_1[i];
                k++;

            }
        }
    }*/

    n = 0;
    k = 0;

    t_u = t_1+t_2;
    for (i = 0; i < t_u; i++) {

        c_u[i] = c_1[i];

        for (j = i - 1; j < t_2; j++) {

            if (c_1[i] == c_2[j]) {

                c_i[k] = c_1[i];
                k++;

            }
        }

        if (i >= t_1) {
            
            int y = i;
            
            for (x = 0; x <= t_u; x++) {

                rem_rep(&y, c_u);

                if (c_u[n] != c_2[x]) {

                    c_u[y] = c_2[x];
                    y++;
                }
                
                rem_rep(&y, c_u);
            }
            n++;
        }

    }
    cout << "\n\n\t Vetor I em união com II: ";
    exib_vetor(t_u-k, c_u);
    
    cout << "\n\n\t Vetor I em intersecção com II: ";
    exib_vetor(k, c_i);

    return 0;
}

