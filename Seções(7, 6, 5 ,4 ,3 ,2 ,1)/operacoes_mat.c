#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){
    
    //Definindo variáveis
    int a = 6, b = 4;

    //Soma
    printf("A soma de %d e %d = %d", a, b, a + b);

    //Subtração
    printf("\n A subtracao de %d e %d e = %d", a, b, a - b);

    //Divisão
    printf("\n A divisao de %d e %d e = %d", a, b, a / b);

    //Multiplicação
    printf("\n A multiplicacao de %d e %d e = %d", a, b, a * b);

    //Resto da Divisão
    printf("\n O resto da divisao de %d e %d e = %d", a, b, a % b);

    //Valor Absoluto
     printf("\n O valor abstoluto de -3 e = %d", abs(-3));

    //Imprima na tela
    printf("\nOi mundo!");

    //Pause o programa após executar
    system("pause");

}
