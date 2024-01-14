//Escreva um programa que peça para o usuário digitar duas variáveis 
//inteiras (x e y) e imprima o resultado da multiplicação entre essas 
//duas variáveis.

#include <stdio.h>

int main() {

    int x,y;    

    printf("Digite o valor de x: \n");
    scanf("%d",&x);

    printf("Digite o valor de y: \n");
    scanf("%d",&y);
    
    
    printf("O valor de y e: %d \n", y*x);
}


// cod do professor: 

// int main() {
//   int x;
//   int y;

//   printf("Primeiro valor: ");
//   scanf("%d", &x);

//   printf("Segundo valor: ");
//   scanf("%d", &y);

//   int m = x * y;
//   printf("A multiplicacao de %d por %d eh igual a %d\n", x, y, m);
// }