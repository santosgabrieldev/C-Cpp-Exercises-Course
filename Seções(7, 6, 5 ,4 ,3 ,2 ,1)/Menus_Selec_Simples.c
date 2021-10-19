#include <stdio.h>
#include <stdlib.h>

void main (){

    int opcao;

    /*Confere e valida a opcao(Dá
    a chance do usuário tentar nova-
    mente)*/
     
    while(opcao < 1 || opcao > 3){

         //Interface de Menu
        printf("Escolha uma opcao:");
        printf("\n1-Opcao 1");
        printf("\n2-Opcao 2");
        printf("\n3-Opcao 3\n");

        //Lendo a opção
        scanf("%d", &opcao);

        //Resultado de acordo com a opcao escolhida
        switch(opcao){
            case 1:
                printf("\nOpcao1 foi escolhida");
                break;
            case 2:
                printf("\nOpcao2 foi escolhida");
                break;
            case 3:
                printf("\nOpcao3 foi escolhida");
                break;
            default:
                printf("\nOpcao invalida!");
                break; 
        }
    system ("pause");
}
















}