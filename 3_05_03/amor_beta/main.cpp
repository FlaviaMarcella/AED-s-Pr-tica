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

#include <cstdlib>
#include <string>
#include <stdio.h>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    string art = "";
    char resp;
    

    printf("\n\n");
    printf("          **********            **********\n");
    printf("        **************        **************\n");
    printf("      *****************      *****************\n");
    printf("     *******************    *******************\n");
    printf("    *********************  *********************\n");
    printf("   **********************************************\n");
    printf("  ************************************************\n");
    printf("  ************************************************\n");
    printf("   **********************************************\n");
    printf("    ********************************************\n");
    printf("     ******************************************\n");
    printf("      ***************************************\n");
    printf("       *************************************\n");
    printf("        ***********************************\n");
    printf("         *********************************\n");
    printf("          *******************************\n");
    printf("           *****************************\n");
    printf("            ***************************\n");
    printf("             *************************\n");
    printf("              ***********************\n");
    printf("               *********************\n");
    printf("                *******************\n");
    printf("                 *****************\n");
    printf("                  ***************\n");
    printf("                   *************\n");
    printf("                    ***********\n");
    printf("                     *********\n");
    printf("                      *******\n");
    printf("                       *****\n");
    printf("                        ***\n");
    printf("                         *\n");

    
    
    printf("\t Oi! =) \n");
    printf(" Passando pra dizer, que eu te amo mais... \n");
    printf(" Você concorda com essa afirmação? \n");
    printf(" S = sim || N = não \n Resposta: ");
    
    scanf(" %c",&resp);
    
    if (resp == 'S' || resp == 's') {
        
        printf("Parabéns, teste concluído com sucesso!");

    }else if (resp == 'N' || resp == 'n'){
        
        printf("Tem certeza?");
        printf(" S = sim || N = não \n \t Resposta: ");
    
        scanf(" %c",&resp);
    
        while (resp != 'N' || resp != 'n') {
            
            printf("Tem certeza?");
            printf(" S = sim || N = não \n \t Resposta: ");
    
            scanf(" %c",&resp);
            
        }

        
        printf("Muito bem, obrigada por assumir...");
        close();


    }


            
    return 0;
}

