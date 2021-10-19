#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");
    /*Preencha uma matriz 2x2 lendo valores do usuário e
    depois troque os valores entre a primeira e a segunda linha.*/
    
    //criando uma matriz:
    int matrizCher[2][2],aux1,aux2;

    printf("Digite um valor para [0][0]: ");
    scanf("%d", &matrizCher[0][0]);
    printf("Digite um valor para [0][1]: ");
    scanf("%d", &matrizCher[0][1]);
    printf("Digite um valor para [1][0]: ");
    scanf("%d", &matrizCher[1][0]);
    printf("Digite um valor para [1][1]: ");
    scanf("%d", &matrizCher[1][1]);

/*

    0  1
    |  |  
0 - [1][2]
1 - [3][4]

*/

//Imprimindo matriz
printf("\n%d %d", matrizCher[0][0], matrizCher[0][1]);
printf("\n%d %d\n", matrizCher[1][0], matrizCher[1][1]);

//Auxiliares
aux1 = matrizCher[0][0];
aux2 = matrizCher[0][1];

//Invertendo valores usando auxiliares
matrizCher[0][0] = matrizCher[1][0];
matrizCher[1][0] = aux1;
matrizCher[0][1] = matrizCher[1][1];
matrizCher[1][1] = aux2;

//Imprimindo nova matriz
printf("\n%d %d", matrizCher[0][0], matrizCher[0][1]);
printf("\n%d %d\n", matrizCher[1][0], matrizCher[1][1]);

    system("pause");
}