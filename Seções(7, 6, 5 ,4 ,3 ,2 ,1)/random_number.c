#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){

    //Responsável por alimentar o rand de forma diferente
    srand((unsigned) time ( NULL)); //Pega da memória um valor qualquer

    //Variável que recebe o resto da divisão do número por x ( 0> resultado <x)

    int aleatorio = rand() % 3; //numero aleatório de 0 a 2.

    int aleatoriosegundo = (rand() % 5) + 1; //numero aleatório entre 1 e 4.
    //Imprime o valor

    printf("%d", aleatorio);
    printf("%d", aleatoriosegundo);


    system("pause");
}