/*Crie um algoritmo que leia 3 valores para um vetor de 3 
posições e depois calcule a média dos valores acessando 
o vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    //posições 0, 1 e 2, sempre 1 a menos.
    //Crie um algoritmo que leia 3 valores para um vetor de 3 posições
    //e depois calcule e média dos valores acessando o vetor.

/*
    float vetor [3]; 
    printf("Digite um valor: ");
        scanf("%f", &vetor[0]);
    printf("Digite um valor: ");
        scanf("%f", &vetor[1]);
    printf("Digite um valor: ");
        scanf("%f", &vetor[2]);
    printf("\nvetor [0] = %2.f", vetor[0]); 
    printf("\nvetor [1] = %2.f", vetor[1]);  
    printf("\nvetor [2] = %2.f", vetor[2]);
    printf("\nA media dos vetores eh = %2.f", (vetor[0]+vetor[1]+vetor[2])/3);
*/ 

//Usando For
    /*
    float vetor[3];
    int i;
    for(i = 0; i < 3; i++){
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
    }
    for(i = 0; i < 3; i++){
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
    }
    printf("\nA media dos vetores eh = %2.f", (vetor[0]+vetor[1]+vetor[2])/3);
    */

//Generalizando o código
    int tamanho;
    printf("Qual serah o tamanho do vetor? ");
    scanf("%d", &tamanho);

    float vetor[tamanho], soma;
    
    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    for(i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
    }
    printf("\nA media dos vetores eh = %2.f", soma/tamanho);
}