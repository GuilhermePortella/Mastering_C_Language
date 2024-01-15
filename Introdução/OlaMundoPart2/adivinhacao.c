#include <stdio.h>

int main(){

    //inicio do programa - cabecalho
    printf("**********************************\n");
    printf("*Bem vindo ao jogo de adivinhação*\n");
    printf("**********************************\n");

    //declarar variavel int 
    int numerosecreto = 42 ;
    int chute;

    // imprimir essa variavel em um printf
    //printf("adivinhe o %d numero secreto"\n, numerosecreto);

    printf("Qual e seu chute? \n");
    //função (scanf) para ler o input do usuario
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);


    if(chute == numerosecreto){
        printf("Voce acertou! \n");
    }else{
        printf("Voce errou! \n");
    }
    
    
    printf("Fim de jogo \n");
}