# O Início de tudo

Vemos que para iniciar um programa em C precisamos do:

```
#include <stdio.h>
```

logo após temos que colocar o método main, parecido com Java(a melhor linguagem de programação do mundo)

```
int main() {
}
```
Agora você já tem tudo que precisa para fazer seu primeiro programa em C. Vamos nessa.

Segundo os deuses da programação temos que começar com um programa milenar que desperta a o sentir que existe dentro de você, o famoso Olá mundo:
```
int main(){
    printf("Ola Mundo);
}
```

Agora compile esse código no prompt de comando, nada de compilação por IDE por gentileza, estamos aprendendo C.

Para te ajudar esse é o comando que precisa: 
```
gcc olaMundo.c -o olaMundo.out
```
Lembre-se, isso pode mudar de acordo com seu sistema operacional, por enquanto estou fazendo somente para windows, logo irei atualizar para mac e linux.

Com esse comando seu programa foi compilado, agora execute ele

```
olaMundo.exe
```

Pronto você fez um programa em C, meus parabéns.


## Pensa que acabou, você está errado, para de ver memes zuando Java ou você será o próximo sênior de no-code 

Vamos agora colocar variáveis em seu programa.

```
int coder = 42;
```

Pronto você criou uma variável com a resposta de tudo.

Mas como vejo a resposta de tudo ? Simples, assim: 

```
printf("Qual é a resposta para tudo no universo %d \n", \coder);
```

Agora você responde, qual é a resposta para tudo ? 

```
int coder;

printf("Qual é a resposta para tudo ? \n");
scanf("%d", &coder);
```

Você acabou de aprender como se lê um input, meus parabéns.

Agora como desafio você precisa apresentar o número da pergunta em um printf e para dar uma emoção a mais você deverá adicionar mais uma variável e fazer uma operação matemática, vamos lá você consegue. Dúvidas pode me perguntar.
