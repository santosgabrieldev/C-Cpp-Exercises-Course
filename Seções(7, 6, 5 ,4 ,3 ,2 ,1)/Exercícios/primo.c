//Crie um algoritmo que informe se o valor lido é primo ou não
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "");
     int i, valor, aux = 0;

    printf("Digite um valor para saber se ele eh primo: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){

        //Conferindo quantas vezes houve divisibilidade
        if(valor % i == 0){
            aux++;
        }
    
         //Exibe o resto da divisão na tela
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);

    }

    if(aux == 2){
        printf("O numero eh primo!\n");
    }else{
        printf("O número nao eh primo! Pois ele tem %d divisores!\n",aux );
    }

    system("pause");
}