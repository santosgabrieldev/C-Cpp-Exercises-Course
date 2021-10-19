#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

char retornaLetra(){
    return 'x';
    //return 120 (tabela ASC 120 = x);
}

int main(){

    //Definindo variáveis
    char letra;

    //Char recebendo valor de uma função
    letra = retornaLetra();

    //Imprimindo novo valor
    printf("%c", letra);

    return 0;
}