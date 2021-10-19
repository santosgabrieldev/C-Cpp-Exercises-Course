#include <stdio.h>
#include <stdlib.h>

void limpatela(){
    system("CLS");

}
int main(){

    int a;

    printf("Digite um valor para 'a': ");

    scanf("%d", &a);

    //Função(biblioteca stdlib.h) que limpa da tela
    //system("CLS"); Clean Screen
    limpatela();

    printf("O valor digitado foi %d \nFIM DO PROGRAMA!" ,a);
    return 0;
}