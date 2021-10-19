#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    float nota1, nota2, nota3, media;
    
    printf("Insira o valor da nota 1: ");
    scanf("%f", &nota1);
    printf("Insira o valor da nota 2: ");
    scanf("%f", &nota2);
    printf("Insira o valor da nota 3: ");
    scanf("%f", &nota3);    

    media = (nota1 + nota2 + nota3)/3;
    // "%.xf"" {x = número de casas decimais depois da vírgula}
    printf("A media entre as notas: %.2f, %.2f, %.2f eh = %.2f", nota1, nota2, nota3, media);
    if(media >= 7){
        printf("\nParabens! sua media eh de %.0f voce esta aprovado!" ,media);
    }
    else{
        printf("\nInfelizmente voce foi reprovado! Sua media de %.2f eh menor que 7!" ,media);
        }
}