#include <stdlib.h>
#include <stdio.h>

                    //Conteúdo apontado pelo endereço da memória a enviado
void imprimeVetor(int *vetor, int tamanho){

    //Variável Contadora
    int i;

    //Percorrendo o vetor
    for (i = 0; i < tamanho; i++)
        printf("%d \n",vetor[i]);
    
}

void modificaVetor(int *vetor, int tamanho){

    //contador
    int i;

    //Percorrendo o vetor
    for(i = 0; i < tamanho; i++)
        vetor[i] = vetor[i] + 1;
    
}


int main(){

    //Definindo Vetor
    int v[3] = {1,2,3};
    
    //Mostrando Vetor
    imprimeVetor(v, 3);

    //Modifica Vetor
    modificaVetor(v, 3);

    //Mostrando Vetor
    imprimeVetor(v, 3);
    
    return 0;
}