#include <stdio.h>
#include <stdlib.h>

int retornaComMaisDez(int numero){
    return numero + 10;
}
                    //Conteúdo apontado pelo endereço da memória a enviado
void aumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(){

    int a = 5;

    printf("%d \n", a);

    a = retornaComMaisDez (a);

    printf("%d \n", a);

    //Função que aumenta 10 diretamente
    aumentaDez(&a);
    
    //Mostrando o Valor
    printf("%d \n", a);


    return 0;
}