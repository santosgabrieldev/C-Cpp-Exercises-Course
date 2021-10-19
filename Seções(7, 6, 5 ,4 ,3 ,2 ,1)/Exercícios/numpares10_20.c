/*Crie um algoritmo que imprima os números pares de 10
a 20 (usando While, Do While ou For)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    int a = 20;
    for(a = 10; a<=20; a++){
        if(a % 2 == 0){
        printf("\n%d", a);
        }
    }
    system("pause");
}
    