//Funções vazias, sem retorno e sem parâmetro
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void desenhaBorda (){ //Se chama void pois não retorna nada.
    
    //Possibilita uma alteração mais rápida
    printf("|-----------------------------| \n");

}

int main(){ //Se chama int pois retorna um inteiro, no caso 0.

    //Chamando a função
    desenhaBorda();

    printf("hi\n");

    desenhaBorda();

    return 0;
}