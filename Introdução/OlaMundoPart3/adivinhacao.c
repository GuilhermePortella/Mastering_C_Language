#include <stdio.h>

int main(){

    //inicio do programa - cabecalho
    printf("**********************************\n");
    printf("*Bem vindo ao jogo de adivinhação*\n");
    printf("**********************************\n");

    //declarar variavel int 
    int numerosecreto = 42 ;

    int chute;
    int tentativa = 1;

    int pontos = 1000; 

    while(1){

        printf("Qual e seu chute? \n");
        printf("tentativa numero %d\n", tentativa );
        //função (scanf) para ler o input do usuario
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);  


        if (chute < 0){
            printf("NAO digite numeros negativos programador de no-code \n");
            //continue para o proximo loop
            continue;
        }
        
        //comparacao se chute e igual numero secreto
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

        int pontosperdidos = (chute - numerosecreto) / 2;

        pontos = pontos - pontosperdidos;
    
    }
    printf("Fim de jogo \n");
    printf("Voce acertou em %d \n", tentativa);
    printf("Total de pontos: %d \n", pontos);
}