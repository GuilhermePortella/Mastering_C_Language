# O que vem após seu primeiro Olá mundo? 

Claro que o vídeo do Akita: [Não se assuste](https://www.youtube.com/watch?v=YyWMN_0g3BQ&t=358s&ab_channel=FabioAkita)

Não se esqueça de assistir a primeira parte desse video, deixa de ser fraco aqui não tem espaço para javascript [Hello World Como Você Nunca Viu! | Entendendo C
](https://www.youtube.com/watch?v=Gp2m8ZuXoPg&ab_channel=FabioAkita)


Bom aqui nessa parte começamos a ver conteúdos que todo iniciante usa e abusa, o tenebroso bloco IF, sério não use isso muitas vezes vai entregar que você é iniciante em programação, ou um sênior de no-code.

Apesar de programadores JavaScript adorarem esse bloco, ele tem sua importância, aqui você começa a entender conceitos mais legais de programação como:

### aaa minha nossa, como posso fazer que meu programa adivinhe o numero do meu jogo de adivinhação ??

R: Uma das milhares de formas de fazer isso é com o bloco if, isso pode ficar assim:

```
    if (numeroInput == númeroDoJogo){
    }
```

Vamos nos contentar apenas com o if nesse momento. Esse código faz uma comparação do número que foi digitado, o seu input, com o número que você foi definido em sua variável que contém o número a ser adivinhado, no nosso caso o 42.

### A mas se eu não acertar o número, o que vai acontecer ?

Desista, estamos programando em C, aqui não tem espaço para perder.

Brincadeira. Não se ofenda.

Agora entra o segundo bloco preferido dos programadores javascript, o bloco else.

Neste bloco ele funciona como uma ajuda ao bloco if, no exemplo acima se você acertar ele entra no bloco if e executa o que você programar, caso o input seja errado ele pode ir para o else, fica assim:

```
    else {
        printf("Tente novamente\n");
    }
```

Agora você irá exibir uma mensagem para o jogador tentar novamente, porque ele não sabe a resposta para tudo no universo, fazer o que né?

O código completo fica assim: 

```
    if (numeroInput == númeroDoJogo){
        printf("Boa, voce acertou ! \n")
    }
    else {
        printf("Errrooouuuuuuu");
    }
```

Agora você precisa me responder, em algum lugar existe um erro de programação, diga onde está esse erro.

Não acaba por aí meu jovem programador de html e javascript.


Nesse momento você já deve saber o que é uma variável, então me responda:

### O que é o escopo de uma variável ?

Não se preocupe, vou te ajudar.

O escopo de uma variável funciona como o paradoxo da máquina do tempo, não conhece também, meu Deus você deve estar perdido, sério!

O paradoxo da máquina do tempo é o seguinte, a viagem no tempo irá existir apenas após a criação dela, óbvio não é ?

Mas vamos lá, fica mais legal, como eu poderia viajar para o passado anterior a invenção da máquina do tempo ? Não seria possível, então estou preso ao presente e ao futuro, entrando no futuro estou preso em um loop que faz eu retornar ao passado, no momento exato da criação maquina do tempo.

Assim funciona o escopo de uma variável, ela vai existir apenas na linha do tempo que você criar ela, nunca antes e nunca depois. 

### Meu Deus, como assim não depois ?

Pensa assim, se você criar uma variável dentro de um bloco if ele vai existir fora dele ? 

Não, ele está preso naquela linha do tempo.


## Bloco FOR();

O bloco For():

```
for (inicialização; condição; incremento) {

}
```

É uma estrutura de repetição para você deixar seus ifs mais interessantes e disfarçar que você vem do javascript, ele irá se repetir até a condição proposta por você ser atendida completamente, essa condição é verificada antes de cada execução do bloco, condição verdadeira o bloco é executado, condição falsa bloco vai ser encerrado.


Vamos de exemplo do bloco for:
```
for (int i = 1; i <= 10; i++) {
  printf("%d\n", i);
}
```

## #define: Uma variavel ? Um codigo magico ? O que é isso ?

Diferente de uma variável e um código mágico o #define é uma constante, parecido com javascript ? negativo meu caro.

Em C a constante é um valor que não pode ser alterado durante a execução de um programa, e uma diretiva pré-processamento.
Por exemplo vamos definir uma constante com valor de PI: 

```
#define PI 3.141
```

Acostumado a usar bibliotecas no seu javascript, aqui não tem moleza não em.


Sendo assim definida sempre que chamar essa constante com "PI" o valor retornado vai ser 3.141.

Agora vamos para um exemplo mais prático:

Aqui vamos ver seu código preferido, o if():


```
if (erro) {
  printf("Errouuuu.\n");
}
```

Com o #define pode se tornar isso:

```
#define ERRROUUU_JS printf("Errouuuu.\n");

if (erro) {
  ERRROUUU_JS;
}
```

Observe que o código fica mais elegante com essa pequena mudança, então considere o uso disso no seu próximo programa.



## continue;


## Bloco while()

O Bloco while, também é um bloco de código de repetição, no caso ele sempre será executado quando a condição for verdadeira.

A sintaxe é assim:

```
while (condição) {
  // Bloco de código
}
```

Onde a (condição) é uma expressão booleana que é avaliada a cada interação do bloco. Caso a condição for verdadeira ele é executado, quando é falsa o bloco e ignorado, vamos de exemplo:

```
int main() {
  int i = 1;

  while (i <= 10) {
    printf("%d\n", i);
    i++;
  }

  return 0;
}
```

### Agora me responde, o que vai acontecer ai ?



## exercicios: 