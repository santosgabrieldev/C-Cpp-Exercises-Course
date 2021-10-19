#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

void main(){

    int a =1 , b = 10;

    //Contando até 10 (Contagem Crescente)
    while (a <= 10){

        //Impressão do valor
        printf("\n%d", a);

        //Incremento
        a++; //a = a + 1;
    }

    //Contando até 1 (Contagem decrescente)
    while (b >= 1){

        //Impressão do valor
        printf("\n%d", b);

        //Incremento
        b--; //b = b - 1;
    }

    a = 20; 
        
        do{

            //imprimindo 'a' na tela
            printf("\n%d, a");
            //incremento
            a++;
        }while(a <= 10);
    system("pause");
} //Enquanto o while confere a condição, depois repete o bloco
  // Do While primeiro executa uma vez, depois confere a condição
