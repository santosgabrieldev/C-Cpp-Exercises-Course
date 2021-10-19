
#include <stdio.h>
#include <stdlib.h>

void main(){

    char palavra[10]; //determinar n° de caracteres da palavra
    printf("Digite uma palavra: ");

    //Limpando o buffer
    setbuf(stdin, 0); //stdin = standard input (Entrada principal/padrão)

    //lê a string
    fgets(palavra, 255, stdin);


    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0'; //strlen = comprimento(length) da string
    /*A função strlen() tem como argumento um string. 
    Ela retorna um inteiro que é o comprimento do string */

    //imprime na tela
    printf("%s", palavra);

    //Pausa o programa após executar
    system("pause");
}