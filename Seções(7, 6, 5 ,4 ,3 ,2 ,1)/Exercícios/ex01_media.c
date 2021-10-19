#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo Variáveis
    float nota1, nota2;

     printf("Olá, boa tarde!! \n");

    //Crie um algoritmo que leia 2 notas e mostre a média entre elas.

     printf("Digite a primeira nota: ");
     scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
     scanf("%f", &nota2);

    printf("\nA media entre as notas inseridas é: %f", (nota1 + nota2) / 2);

}