
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
     setlocale(LC_ALL, "");

     int a, b, c;
    
    /*Crie um algoritmo que leia 3 números inteiros de uma só vez
    e coloque o resultado da multiplicação entre os 3 em uma variável própria, 
    depois mostre essa variável. */

    printf("Insira o valor de a: ");
    scanf("%d", &a);
    
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    
    printf("Insira o valor de c: ");
    scanf("%d", &c);
    
    int d = (a * b * c);

    printf("\nO resultado da multiplicacao de %d, %d e %d eh = %d",a ,b ,c ,d);

}