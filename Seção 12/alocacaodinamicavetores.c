//Revisar Ponteiros, alocação de memória(buffer);
#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){

    //Ponteiro auxiliar
    int *aux;

    //Alocação dinâmica de Memória
    aux = (int*) malloc(tamanho * sizeof(int));
    //função malloc (memory allocation)
    //Retorna o ponrteiro que aponta para a primeira posição de memória do vetor alocado
    return aux;

}


int main(){

    //Definindo variáveis
    int *vetor, tamanho, cont;

    //Lendo o tamanho do vetor pelo usuário
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    //Vetor recebe o endereço de memória que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    //Coloca valores no vetor
    /*
    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;
    */
    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = 90;
    }

    //Imprime vetor
    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }

    //Liberação da memória utilizada pelo vetor
    free ( vetor );

    //retorno da função
    return 0;
}