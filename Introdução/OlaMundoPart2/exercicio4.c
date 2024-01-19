//Escreva um programa que imprima a soma de todos os números 
//de 1 até 100.  Ou seja, ele calculará o 
//resultado de 1+2+3+4+...+100.


#include <stdio.h>
int main(){
    
    int numero = 0;
    for (int i = 0; i < 101; i++){
        numero += i;
        printf("%d \n", numero);
    }
}

