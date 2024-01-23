# Conceitos da Linguagem C


## Vamos começar pela instalação e configuração dos programas que você vai precisar.
### Compilação e execução de programas em C/C++ 

 Para começar iremos fazer o download do MinGW nesse [link](https://sourceforge.net/projects/mingw/)


### O MinGW

Para usar o GCC no Windows, é necessário instalar um conjunto de arquivos cabeçalho para a API do Windows. O GCC é um conjunto de compiladores de linguagens de programação, incluindo C e C++.

Para compilar arquivos C e C++ no windows você precisa desse conjunto de arquivos GCC(GNU Compiler Collection) resumidamente são os compiladores que precisamos para executar nossos programas.

Para compilar arquivos C e C++ no windows você pode digitar o seguinte comando: 

```
gcc arquivo.c -o arquivo.exe 
```

Vamos explicar o que é isso:

- gcc: é o nome do compilador C.
- arquivo.c: é o nome do seu código, o arquivo que você programou e você quer compilar
- -o: isso especifica o nome do arquivo que será gerado o executável 
- arquivo.exe: esse é o nome do arquivo compilado que você poderá executar em seu PC

 * Lembre-se, por enquanto todos esses comandos são exclusivamente para o sistema windows, apesar de os demais sistemas operacionais e distribuições linux não terem muitas diferenças pode ocorrer erros.

<img src="img\waxVImv.png">


### Meu primeiro programa:
 - [Olá mundo em C](Introdução/OlaMundo)
