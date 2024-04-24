# Conceitos da Linguagem C


## Vamos começar pela instalação e configuração dos programas que você vai precisar.
### Compilação e execução de programas em C/C++ 

 Para começar iremos fazer o download do MinGW nesse [link](https://sourceforge.net/projects/mingw/)


### O MinGW

Para usar o GCC no Windows, é necessário instalar um conjunto de arquivos cabeçalho para a API do Windows. O GCC é um conjunto de compiladores de linguagens de programação, incluindo C e C++.

Para compilar arquivos C e C++ no windows você precisa desse conjunto de arquivos GCC(GNU Compiler Collection) resumidamente são os compiladores que precisamos para executar nossos programas.

## Variáveis de ambiente 

Programas que são executados e compilados precisam receber informações de algum lugar. Essas informações são passadas, nesse caso, por uma variável de ambiente.
Nós vamos modificar a variável de ambiente PATH, ela é responsável por guardar informações sobre comandos que o que deve ser feito quando invocados, assim não sendo necessário vc digitar o caminho absoluto da ferramenta e seu local de instalação.

 - Procure por ´edit the system environment variables´ no seu computador.
    - Dependendo de suas configurações irá aparecer um aviso, não tenha medo, somente avance.
 
 - Na tela que abrir vá até a aba ´advanced´.
 - Nessa aba clique em ´Environment variables...´
 - Na caixa de seleção ´User variables for YoutUser´, procure por ´path´.
 - Quando achar ´path´, clique em ´edit´.
 - Assim que abrir a nova tela com suas variáveis, procure por ´C:\MinGW\bin´, caso já exista não é necessário nenhuma ação.
 - Se não  existir crie uma nova linha e adicione esse conteúdo: ´C:\MinGW\bin´

Pronto, aqui terminamos sua configuração de variáveis de ambiente.






### Para compilar arquivos C e C++ no windows direto no terminal você pode digitar o seguinte comando: 

```
gcc arquivo.c -o arquivo.exe 
```

Vamos explicar o que é isso:

Esse comando é o responsável por compilar seu arquivo em código fonte na extensão C para um arquivo executável de extensão .exe, assim possibilitando a visualização do seu programa.

O comando irá analisar seu código fonte C, vai gerar o novo arquivo, nesse processo ele não irá apresentar nenhuma mensagem, fique tranquilo você não errou, mensagens são apresentadas apenas quando ele encontrar erros em seu código, normalmente esses erros está especificado exatamente o que você esqueceu ou programou errado, pode ser seu melhor amigo ou seu maior pesadelo.


- gcc: é o nome do compilador C.
- arquivo.c: é o nome do seu código, o arquivo que você programou e você quer compilar
- -o: isso especifica o nome do arquivo que será gerado o executável 
- arquivo.exe: esse é o nome do arquivo compilado que você poderá executar em seu PC

 * Lembre-se, por enquanto todos esses comandos são exclusivamente para o sistema windows, apesar de os demais sistemas operacionais e distribuições linux não terem muitas diferenças pode ocorrer erros.

<img src="img\waxVImv.png">

[Bibliotecas de funções](https://www.ime.usp.br/~pf/algoritmos/apend/interfaces.html)


### Meu primeiro programa:
 - [Olá mundo em C](Introdução/OlaMundo)
