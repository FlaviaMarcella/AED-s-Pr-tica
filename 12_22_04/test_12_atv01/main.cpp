/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * 
 * Roteiro:
    criar um projeto novo com o código abaixo; 
    iniciar os vetores ‘nome’ e ‘sobrenome’ com as letras do seu próprio nome, e não se esqueça do ‘\0’ no final;
    construir o vetor ‘nomecompleto’ copiando as letras dos vetores nome e sobrenome utilizando repetições com índices;
    colocar os caracteres do nome completo em maiusculas;
    agora, colocar os caracteres em minúsculas, menos as primeiras letras do nome completo;
    retirar os espaços de um nome completo;
    procurar se um nome está dentro de um nome completo.
 * 
 * Created on 23 de abril de 2024, 12:25
 */

#include <cstdlib>
#include <cstdio>
#include <locale>


using namespace std;

/*
 * 
 */
int main() {

    int i, j, k;
    char nome[31], sobrenome[31], nomecompleto[61], resposta[31], vetResp[32];

    i = 0;
    j = 0;
    k = 0;

    nome[0] = 'F';
    nome[1] = 'l';
    nome[2] = 'a';
    nome[3] = 'v';
    nome[4] = 'i';
    nome[5] = 'a';
    nome[6] = '\0';

    printf("\n Nome: %s!", nome);

    sobrenome[0] = 'M';
    sobrenome[1] = 'o';
    sobrenome[2] = 'r';
    sobrenome[3] = 'e';
    sobrenome[4] = 'i';
    sobrenome[5] = 'r';
    sobrenome[6] = 'a';
    sobrenome[7] = '\0';

    printf("\n Sobrenome: %s!", sobrenome);

    for (i = 0; nome[i] != '\0'; i++) {
        nomecompleto[i] = nome[i];

    }

    nomecompleto[i] = ' ';
    i++;


    for (j = 0; sobrenome[j] != '\0'; j++) {

        nomecompleto[i] = sobrenome[j];
        i++;

    }

    nomecompleto[i + 1] = '\0';

    printf("\n Nome Completo: %s!", nomecompleto);

    for (i = 0; nomecompleto[i] != '\0'; i++) {

        nomecompleto[i] = toupper(nomecompleto[i]);
    }

    printf("\n Nome Completo em maiusculo: %s!", nomecompleto);

    for (i = 1; nomecompleto[i] != '\0'; i++) {
        nomecompleto[i] = tolower(nomecompleto[i]);

        if (nomecompleto[i] == ' ') {
            i++;
        }

    }

    printf("\n Nome Completo ajustado: %s!", nomecompleto);

    for (i = 0; nomecompleto[i] != '\0'; i++) {

        if (nomecompleto[i] == ' ') {

            for (j = i + 1; nomecompleto[j] != '\0'; j++) {

                nomecompleto[i] = nomecompleto[j];
                i++;
            }
        }
    }

    nomecompleto[i - 1] = '\0';

    printf("\n Nome Completo s/espaço: %s!", nomecompleto);

    printf("\n Qual nome você deseja procurar? ");
    printf("\n Insira aqui: ");
    scanf("%s", &resposta);

    j = 0;

    printf("\n     Procurando nome");
    
    int encontrados = 0;
    for (int i = 0; nomecompleto[i] != '\0'; i++) {
        int j = 0;
        while (nomecompleto[i + j] == resposta[j] && resposta[j] != '\0') {
            vetResp[k] = nomecompleto[i+j];
            k++;
            j++;
        }
        if (resposta[j] == '\0') {
            encontrados++;
        }
    }
    

    if (encontrados > 0) {
        printf("\n\n Nome encontrado!");
        printf("\n Resposta: %s", vetResp);
    } else {
        printf("\n\n Nome não encontrado!");
    }


    return 0;
}

