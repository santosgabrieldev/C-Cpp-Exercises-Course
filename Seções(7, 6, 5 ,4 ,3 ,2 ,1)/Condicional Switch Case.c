#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
     int a = 2;
     char b = 'y';

     //Código de exemplo com if
     if (a == 1 ){
         printf("\n Opcao escolhida: 1");
     } else if (a == 2){
         printf("\n Opcao escolhida: 2");
     }else if (a == 3){
         printf("\n Opcao escolhida: 3");
     }else{
         printf("Opcao invalida!");
    }

    //O mesmo código de cima, adaptado ao Switch
    switch(a){
        case 1:
            printf("\n Opcao escolhida: 1");
            break;
         case 2:
            printf("\n Opcao escolhida: 2");
            break;
         case 3:
            printf("\n Opcao escolhida: 3");
            break;
        default:
            printf("\n Opcao invalida");
            break;
    }

    //Switch com Char
    switch(b){
        case 'x':
            printf("\n A letra eh x");
            break;
        default:
            printf("\n Opcao invalida");
            break;
    }

    system("pause");
}