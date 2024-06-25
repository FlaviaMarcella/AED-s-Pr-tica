/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.1.08.025
 *
 * Created on 25 de março de 2024, 16:45
 */

#include <cstdlib>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int anteriorInt = -1;
    int proximoInt = 0;
    while (proximoInt > anteriorInt) {
        anteriorInt = proximoInt;
        proximoInt++;
    }

    printf("\tLimite superior Int: %d\n"
           "\tLimite inferior Int: %d", anteriorInt, proximoInt);
        
    long int anteriorLongInt = -1;
    long int proximoLongInt = 0;
    while (proximoLongInt > anteriorLongInt) {
        anteriorLongInt = proximoLongInt;
        proximoLongInt++;
    }

    printf("\tLimite superior LongInt: %d \n"
           "\tLimite inferior LongInt: %d", anteriorLongInt, proximoLongInt);    
    
    short int anteriorShortInt = -1;
    short int proximoShortInt = 0;
    while (proximoShortInt > anteriorShortInt) {
        anteriorShortInt = proximoShortInt;
        proximoShortInt++;
    }

    printf("\tLimite superior ShortInt: %d \n"
           "\tLimite inferior ShortInt: %d", anteriorShortInt, proximoShortInt);

    unsigned int anteriorUnsignedInt = -1;
    unsigned int proximoUnsignedInt = 0;
    while (proximoUnsignedInt > anteriorUnsignedInt) {
        anteriorUnsignedInt = proximoUnsignedInt;
        proximoUnsignedInt++;
    }

    printf("\tLimite superior UnsignedInt: %d \n"
           "\tLimite inferior UnsignedInt: %d", anteriorUnsignedInt, proximoUnsignedInt);  

    return 0;
}        

