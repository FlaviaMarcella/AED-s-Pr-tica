/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * Created on 27 de maio de 2024, 17:17
 */

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

/*
 * 
 */

int tam = 100000;

int opcao() {

    int resp = -1;

    cout << "\n\t Menu";

    cout << "\n\t 1 - Random number's generator";
    cout << "\n\t 2 - Bubble Sort";
    cout << "\n\t 3 - Insertion Sort";
    cout << "\n\t 4 - Selection Sort";
    cout << "\n\t 5 - Modificar tamanho do vetor";
    cout << "\n\t 0 - Sair" << endl;

    cout << "\n\t Opção: ";
    cin >> resp;
    cout << endl;

    return resp;
}

void exibe_vetor(int v[], int tam) {

    cout << "\n\t ";

    for (int i = 0; i < tam; i++) {
        cout << v[i] << " ,";

    }

    cout << endl;


}

void salva_vetor(int v[], int tam) {

    ofstream arquivo_saida("aleatorio.txt");

    for (int y = 0; y < tam; y++) {

        arquivo_saida << v[y] << " ";
    }

    arquivo_saida.close();

}

void gera_aleatorio(int v[], int tam) {

    //tornando as posições zeradas
    for (int i = 0; i < tam; i++) {
        v[i] = i;
    }

    srand(time(NULL));

    for (int i = 0, j = 0, z = tam, aux = 0; i < tam; i++) {
        j = rand() % z;
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }

    salva_vetor(v, tam);
    exibe_vetor(v, tam);

}

void bubble_sort(int v[], int tam, long int c) {

    int aux = 0;
    int x[tam];
    c = 0;

    for (int i = 0; i < tam; i++) {
        x[i] = v[i];
    }

    cout << "\n\t Vetor x: ";
    //exibe_vetor(x, tam);


    for (int i = tam; i > 0; i--) {
        for (int k = 0; k < i - 1; k++) {
            c++;
            if (x[k] > x[k + 1]) {
                aux = x[k];
                c++;
                x[k] = x[k + 1];
                c++;
                x[k + 1] = aux;
                c++;
            }
            c++;
        }
        c++;

    }

    cout << "\n\t Vetor x ordenado: ";
    //exibe_vetor(x, tam);

    cout << endl;
    cout << "\t N° de operações: " << c << endl;

}

void insertion_sort(int v[], int tam, long int c) {

    int aux = 0;

    int y[tam];

    for (int i = 0; i < tam; i++) {
        y[i] = v[i];
    }

    cout << "\n\t Vetor y: ";
    //exibe_vetor(y, tam);

    for (int i = 1, k = 0; i < tam; i++) {

        aux = y[i];
        c++;

        k = i - 1;

        while (k >= 0 && y[k] > aux) {
            c++;

            y[k + 1] = y[k];
            c++;

            k = k - 1;

        }

        y[k + 1] = aux;
        c++;

        c++;
    }

    cout << "\n\t Vetor y ordenado: ";
    //exibe_vetor(y, tam);

    cout << endl;
    cout << "\t N° de operações: " << c << endl;

}

void selection_sort(int v[], int tam,long int c) {

    clock_t start_time = clock();

    int aux = 0, min;

    int z[tam];

    for (int i = 0; i < tam; i++) {
        z[i] = v[i];
    }

    cout << "\n\t Vetor z: ";
    //exibe_vetor(z, tam);

    for (int i = -1; i < tam; i++) {
        c++;

        min = i;

        aux = z[i];
        c++;

        for (int k = i + 1; k < tam; k++) {
            c++;
            if (z[k] < aux) {
                c++;

                min = k;

                aux = z[k];
                c++;
            }
        }

        aux = z[i];
        c++;

        z[i] = z[min];
        c++;

        z[min] = aux;
        c++;

    }

    cout << "\n\t Vetor z ordenado: ";
    //exibe_vetor(z, tam);

    cout << endl;
    cout << "\t N° de operações: " << c << endl;

    clock_t end_time = clock();

    // Calcular o tempo de execução
    double time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    cout << "\n\t Para um array aleatório de tamanho " << tam << endl;
    cout << "\n\t Tempo de Inicio: " << start_time;
    cout << "\n\t Tempo de Fim: " << end_time;
    cout << "\n\t Tempo de execução: " << time_taken;


}

int main() {

    int opc = -1;
    int vetor[tam];
    int cont = 0;

    clock_t start_time = 0;
    clock_t end_time = 0;
    double time_taken = 0;

    do {

        opc = opcao();

        switch (opc) {

            case 0:
                cout << "\t Opção selecionada: Sair";
                break;

            case 1:
                cout << "\n\t Random Number's Generator \n";


                gera_aleatorio(vetor, tam);



                break;

            case 2:
                cout << "\n\t Algoritm Bubble Sort \n";

                start_time = 0;
                end_time = 0;
                time_taken = 0;

                start_time = clock();
                bubble_sort(vetor, tam, cont);
                end_time = clock();

                // Calcular o tempo de execução
                time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

                // exibe o tempo de execução em segundos e milissegundos
                cout << "\n\t Para um array aleatório de tamanho " << tam << endl;
                cout << "\n\t Tempo de Inicio: " << start_time;
                cout << "\n\t Tempo de Fim: " << end_time;
                cout << "\n\t Tempo de execução: " << time_taken;

                break;

            case 3:
                cout << "\n\t Algoritm Insertion Sort \n";

                start_time = 0;
                end_time = 0;
                time_taken = 0;

                start_time = clock();
                insertion_sort(vetor, tam, cont);
                end_time = clock();

                // Calcular o tempo de execução
                time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

                // exibe o tempo de execução em segundos e milissegundos
                cout << "\n\t Para um array aleatório de tamanho " << tam << endl;
                cout << "\n\t Tempo de Inicio: " << start_time;
                cout << "\n\t Tempo de Fim: " << end_time;
                cout << "\n\t Tempo de execução: " << time_taken;
                break;

            case 4:
                cout << "\n\t Algoritmo Selection Sort \n";

                //start_time = 0;
                //end_time = 0;
                //time_taken = 0;

                //start_time = clock();
                selection_sort(vetor, tam, cont);
                //end_time = clock();

                // Calcular o tempo de execução
                //time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

                // exibe o tempo de execução em segundos e milissegundos
                //cout << "\n\t Para um array aleatório de tamanho " << tam << endl;
                //cout << "\n\t Tempo de Inicio: " << start_time;
                //cout << "\n\t Tempo de Fim: " << end_time;
                //cout << "\n\t Tempo de execução: " << time_taken;

                break;


            case 5:

                cout << "\t Alterar tamanho do vetor...";
                cout << "\n\t Novo tamanho: ";
                cin >> tam;

                cout << "\n\t Tamanho alterado, com sucesso!" << endl;

                break;

            default:
                cout << "\n\t Opção inválida!";
                break;

        }
    } while (opc != 0);

    return 0;
}

