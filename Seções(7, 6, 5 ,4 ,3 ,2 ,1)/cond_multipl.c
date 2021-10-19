#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 10;

    //Conectivo lógico E(AND)
    if (a > 5 && a < 15){
        printf("\nA variavel 'a' esta entre 5 e 15");
    }
    //Conectivo lógico OU (OR)
    if (a > 5 || a > 15){
        printf("\n A variavel 'a' eh maior que 5 ou 15");
    }
    //Misturando Conectivos
    if( (a > 5 && a < 15) || a == 20){
        printf("\n a variavel 'a' esta entre 5 e 15 ou ela vale 20");
    }





    system("pause");
}