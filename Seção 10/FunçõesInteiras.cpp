#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

//Mostrando/Definindo que a função existe, deixando-a no fim do código!
int retornaDez();
float retornaQuebrado();

/*
//Função inteira que retorna o valor 10.
int retornaDez(){
    printf("Hi, Gorg!! \\(^-^)/\n");
    return 10;
}
*/

int main(){

    //Definindo variáveis
    int a;

    //Passando o retorno de uma função para uma variável
    a = retornaDez();

    //imprimindo valor de a
    printf("%d", a);

    //Definindo um float
    float b;

    //Passando o retorno de uma função para uma variável
    b = retornaQuebrado();

    //imprimindo valor de b
    printf("\n%.2f", b);

    return 0;
}

//Função inteira que retorna o valor 10.
int retornaDez(){//correto: RetornaDezEImprimeMensagem
    printf("Hi, Gorg!! \\(^-^)/\n");
    //int numero = 100;
    return 10;
    //return numero * 10;
}

//Retorna um n° "quebrado"
float retornaQuebrado(){
    return 5.5;
}