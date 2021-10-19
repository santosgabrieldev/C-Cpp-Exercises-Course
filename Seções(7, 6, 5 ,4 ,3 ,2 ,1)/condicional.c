#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Função principal do programa
void main (){
    setlocale(LC_ALL,"");

    //Definindo variável
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicional simples
    if( a == 5) {
        printf("\nA variavel a = 5");
    }
    if( b == 2.5) {
        printf("\nA variavel b = 2.5");
    }
    if( c == 'x') {
        printf("\nA variavel c = letra x");
    }

    //número par ou ímpar
    if(a % 2 == 1){
        printf("\n A variavel a eh impar\n");
    }
    else{
        printf("\n a variavel a eh par\n");
    }

    //Condicional composta
    if(opcao ==1) {
        printf("\nA opcao = 1");
    }
    else if (opcao == 2) {
        printf("\nA opcao = 2");
    }
    else{
        printf("\nA opcao nao eh igual a 1 e nem 2");
    }

    //Pausa o programa após executar
    system("pause");

}