#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int segundos = time(0);

    int n1 = rand();
    int n2 = rand();
    int a = 3;
    int b = 2;

    double portos = (double)a / (double)b;
    //printf("%.3f\n", portos);
    
    double pi = 3.1415;
    int piConversion = (int)pi;
    //printf("%f  %d\n", piConversion);
    printf("%d  \n", segundos);

}