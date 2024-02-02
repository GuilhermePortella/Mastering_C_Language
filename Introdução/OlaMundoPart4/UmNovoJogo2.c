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

    int acertou = 0;

    int nivel;
    printf("qual o nivel de dificuldade? \n");
    printf("(1) Facil (2) Medio (3) Dificil \n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch (nivel) {
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default:
            numerodetentativas = 6;
            break;
    }


    // if (nivel == 1){
    //     numerodetentativas = 20;
    // }
    // else if (nivel == 2){
    //     numerodetentativas = 15;
    // }
    // else{
    //     numerodetentativas = 6;
    // }
    

    for(int i = 1; i <= numerodetentativas; i++){

        printf("tentativa numero %d\n", tentativa );
        printf("Qual e seu chute? \n");

        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);  

        if (chute < 0){
            printf("NAO digite numeros negativos programador de no-code \n");
            continue;
        }
        
        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou){
            //printf("Voce acertou! \n");
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

    if (acertou){
        printf("Voce acertou em %d \n", tentativa);
        printf("Total de pontos: %.2f \n", pontos);

    }else {
        printf("Voce perdeu");
    }
    printf("Fim de jogo \n");

}