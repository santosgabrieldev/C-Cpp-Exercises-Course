#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main (){
    setlocale(LC_ALL, "Portuguese_Brasil");

    //Definindo variáveis
    char letra = 'x';

    //Condicional
    if(letra == 'x'){
        printf("\nA letra %c x!", 130);
    }

    printf("\nCodigo da letra = %d", letra); 
    //tranforma de char(caracter) para inteiro na tabela https://ascii.cl

    if (letra == 120){
    printf("\n A letra %c x!", 130);
    } 

    //Pausa o programa após executar
    system("pause");

}