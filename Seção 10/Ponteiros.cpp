#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;
//Ponteiros em C servem para criar uma indireção, ou seja,
//fazer referência a alguma coisa indiretamente.
int main(){

    //variável
    int a = 20;

    //Imprimindo variável na tela
    printf("Valor de a : %d \n", a);

    //Imprimindo o endereço de uma variável
    printf("Endereco de a : %d \n", &a);
    
    //Variáveis armazenam valores
    int b = 10;

    //Ponteiros armazenam posições na memória
    int *ponteiro;
    
    //Ponteiro recebendo a posição na memória da variável b
    ponteiro = &b;

    //Imprimindo o valor de uma variável
    printf("valor de b: %d \n" , b);

    // * pode ser lido como "Conteúdo apontado por"
    *ponteiro = 40;

    //Imprimindo o valor de uma variável
    printf("Valor de b: %d \n", b);

    return 0;
}