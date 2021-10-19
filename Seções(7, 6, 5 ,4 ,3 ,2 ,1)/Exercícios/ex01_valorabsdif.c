#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas.
    float nota1, nota2;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    if(nota1 == nota2){
        printf("As notas 1 e 2 sao iguais!");
    }
    else{
        printf("As notas apresentam valores diferentes!");
        printf("\nA diferenca entre os dois eh: %d", abs(nota1 - nota2) );
    }
    printf("\nA diferenca entre as notas em valor absoluto eh: %d", abs(nota1 - nota2));
    printf("\nO valor absoluto da nota 1 eh = %d", abs(nota1));
    printf("\nO valor absoluto da nota 2 eh = %d", abs(nota2));

}




