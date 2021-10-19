//Funções com Parâmetro Único
#include <stdlib.h>
#include <stdio.h>


void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero){
    return numero - 1;
}
int main(){

    int a;

    printf("Digite um valor: ");

    scanf("%d", &a);

    //Chamando a função:
    mostraSucessor(a);

    //Exibe o Antecessor
    printf("\nO antecessor de %d eh %d", a, retornaAntecessor(a));

    return 0;

}