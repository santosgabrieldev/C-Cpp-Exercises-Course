#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para valores booleanos
#include <iostream>
#include <string>

using namespace std;

bool retornaBooleano(){
    return true;
}

int main(){

    //Definindo variável
    bool variavelBooleana;

    //Variável recebendo booleano
    variavelBooleana = retornaBooleano();

    //Imprimindo variável
    printf("%d", variavelBooleana);

    //1 = true
    //0 = false

    //Se a variável for verdadeira executa o primeiro bloco
    if(variavelBooleana) {
        printf("\nEh verdadeiro!");
    }//Se for falsa, executa o segundo bloco
    else{
        printf("\nEh falso!");
    }
    
    //Retorno da função
    return 0;
}