#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#define TAM 3

using namespace std;

int main(){

    //Definindo Vetor
    int vetor[TAM], cont;

    //Passando valores do vetor
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;

    //Imprimindo valores do vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor [cont] << "\n";
    }

    //Reiniciando o contador
    cont = 0;

    //Imprimindo valores do vetor
    while(cont < TAM){
        printf("%d \n", vetor[cont]);
        cont++
    }


    //Definindo Matrizes
    int matriz[TAM][TAM] = {1,2,3,4,5,6,7,8,9};

    //Imprimindo valores do vetor
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            cout << matriz[i][j] << " "; 
        }
        cout << "\n";
    }

    return 0;
}