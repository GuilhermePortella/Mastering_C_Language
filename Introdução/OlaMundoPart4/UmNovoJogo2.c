#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("**********************************\n");
    printf("*Bem vindo ao jogo de adivinhação*\n");
    printf("**********************************\n");

    int segundos = time(0);
    srand(segundos);
    int numeroJogo = rand(); // gera um numero aleatorio

    int numerosecreto = numeroJogo % 100 ;
    int chute;
    int tentativa = 1;
    double pontos = 1000; 

    int numerodetentativas = 5;

    for(int i = 1; i <= numerodetentativas; i++){

        printf("tentativa numero %d\n", tentativa );
        printf("Qual e seu chute? \n");

        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);  

        if (chute < 0){
            printf("NAO digite numeros negativos programador de no-code \n");
            continue;
        }
        
        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou){
            printf("Voce acertou! \n");
            break;
        }
        else if (maior){
            printf("Seu chute foi maior que o numero secreto! \n");
        } else{
            printf("Seu chute foi menor que o numero secreto! \n");
        }

        tentativa += 1;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    
    }
    printf("Fim de jogo \n");
    printf("Voce acertou em %d \n", tentativa);
    printf("Total de pontos: %.2f \n", pontos);
}