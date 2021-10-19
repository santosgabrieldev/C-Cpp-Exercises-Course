#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "");
    float lado1, lado2, lado3;

    printf("Insira o valor do lado 1: ");
    scanf("%f", &lado1);

    printf("\nInsira o valor do lado 2: ");
    scanf("%f", &lado2);

    printf("\nInsira o valor do lado 3: ");
    scanf("%f", &lado3);

    //Se é equilátero
    if( (lado1 == lado2) && (lado2 == lado3) ){
        printf("\nO triangulo eh equilatero, pois todos os seus lados sao iguais!\n");
        system("pause");
    } 
    //Se é isósceles
    if(lado1 == lado2 || lado1 == lado3 || lado3 == lado2 ){
        printf("\nO triangulo apresenta dois lados iguais.");
        printf(" Portando, eh isosceles!\n");
     }else{
             //Se não for possível formar um triângulo
            printf("\nNao eh possivel formar um triangulo, pois um dos lados eh nulo!\n");
            system("pause");
        }
    //Se é escaleno
    if(lado1 != lado2 && lado1 != lado3 && lado3 != lado2){
        printf("\nO triangulo eh escaleno, pois apresenta todos os lados com valores difentes!\n");
    }

    system("pause");

}