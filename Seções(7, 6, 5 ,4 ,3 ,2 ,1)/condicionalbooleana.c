#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
//Função principal do programa
void main (){
    setlocale(LC_ALL,"");

        //definindo variáveis
        bool a = true, b = false;

    //Se A for verdadeiro
        if(a){
            printf("\nA eh verdadeiro!");
        }

    //Comparando o B
    if(b){
        printf("\nB eh verdadeiro!");
    }else{
        printf("\nB eh falso!");
    }

    //Comparando uma falsidade
    if(!b){ //se B for falso, ! = "Se não" b.
        printf("\nB eh falso!");
    }

        //Pausa o programa após executar
        system("pause");
}