#include <stdio.h>

int main(){

    //inicio do programa - cabecalho
    printf("**********************************\n");
    printf("*Bem vindo ao jogo de adivinhação*\n");
    printf("**********************************\n");

    //declarar variavel int 
    int numerosecreto = 42 ;
    int chute;

    for(int i = 1; i<= 3; i++){
    printf("Qual e seu chute? \n");
    //função (scanf) para ler o input do usuario
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);  

    //comparacao se chute e igual numero secreto
    int acertou = (chute == numerosecreto);

    if(acertou){
        printf("Voce acertou! \n");
        //para o jogo
        break;
    }else{
        int maior = (chute > numerosecreto);
        if (maior){
            printf("Seu chute foi maior que o numero secreto! \n");
        }else {
            printf("Seu chute foi menor que o numero secreto! \n");
        }
    }
}
    printf("Fim de jogo \n");
}