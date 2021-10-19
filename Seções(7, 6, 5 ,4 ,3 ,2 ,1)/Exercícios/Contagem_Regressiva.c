#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    int num1 = 10;
    //Contagem regressiva
    for(num1 = 10; num1 > 0; num1--){
        printf("\n%d", num1);
    
    while(num1 >= 0){
        printf("%d \n ",num1);
        num1--;
    
    do{
        printf("%d \n", num1);
        num1--;
    }while(num1 >= 0);
    system("pause");
}
/*Crie um algoritmo que imprima os números de 10 a 0 
de forma regressiva. (usando While, Do While ou For)*/