/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 5 de março de 2024, 16:59
 */
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <math.h>
#include <cstring>


using namespace std;

void printHeart(int size, double posX, double posY) { 

    int i = 0;
    int j = 0; 

    for (i = 0; i < size; i++) { 

        for (j = 0; j <= 4 * size; j++) { 

            double distance1 = sqrt(pow(i - size, 2) + pow(j - size, 2)); 

            double distance2 = sqrt(pow(i - size, 2) + pow(j - 3 * size, 2)); 

            if (distance1 < size + 0.5 || distance2 < size + 0.5) { 

                printf("*"); 

            } else { 

                printf(" "); 

            } 

        } 

        printf("\n"); 

    } 

} 

int main() {

    float size = 5; // Tamanho padrão do coração 

    float posX = 0; // Posição X padrão 

    float posY = 0; // Posição Y padrão 

 

    // Imprime o coração 
    

    printHeart(size, posX, posY);

    char resposta[10]; 

    while (1) { 

        printf("Você me ama? (sim/não): "); 

        scanf("%c", &resposta); 

        if (strcmp(resposta, "sim") = 0) { 

            printf("Que ótimo! Eu te amo também!\n"); 

            printf("Você admite que eu te amo mais do que você me ama? (sim/não): "); 

            scanf("%c",&resposta); 

            if (strcmp(resposta, "sim") == 0) { 

                printf("Então... você quer se casar comigo?\n"); 

                while (1) { 

                    printf("(sim/não): "); 

                    scanf("%c",&resposta); 

                    if (strcmp(resposta, "sim") == 0) { 

                        printf("Que ótimo! Vamos ser felizes juntos!\n"); 

                        return 0; 

                    } else if (strcmp(resposta, "não") == 0) { 

                        printf("Tudo bem, eu entendo.\n"); 

                        return 0; 

                    } else { 

                        printf("Por favor, responda com ‘sim’ ou ‘não’.\n"); 

                    } 

                } 

            } else { 

                printf("Tudo bem, não precisa admitir. Vamos para a próxima pergunta.\n"); 

            } 

        } else { 

            printf("Ah, que pena. Vamos tentar de novo.\n"); 

        } 

    } 

 

    return 0; 

} 

