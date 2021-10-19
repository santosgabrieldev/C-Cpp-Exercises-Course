#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main(){
     int a = 5, b = 10, c = 15;
     char d = 'x';

     //maior
     if(a > 2){
         printf("\n %d eh maior que 2", a);
     }
    //maior ou igual
    if( c>= b){
        printf("\n %d eh maior ou igual que  %d", c, b);
    }

    //Menor
    if(a <10){
        printf("\n %d eh menor que 10", a);
    }

    //Menor ou igual
    if(a <= 10){
         printf("\n %d eh maior que 2", a);
     }

    //Diferente
    if(c != 10){
         printf("\n %d nao eh 10", c);
     }
     if(d != 'a'){
         printf("\n %c nao eh a\n", d);
     }

    //Pausa o programa após executar
    system("pause");

}