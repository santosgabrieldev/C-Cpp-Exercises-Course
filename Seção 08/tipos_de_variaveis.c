#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    //permite usar acentos
    setlocale(LC_ALL,""); //faz com que o terminal use a lingua padr�o do sistema, no caso, o portugu�s
    printf("Ola, boa tarde!! \n");
    int a = 50;
    int b = 6;
    float c = 5.5;
    printf("a = %d \n", a);
    printf("b = %d", b);
    printf("\na + b = %d", a + b);
    printf("\nO valor de a � = %d " ,a);
    scanf("%d", &a); // ler um novo valor
    printf("\nO valor de a mudou para %d", a);

    printf("\nO valor de c � %f \n", c);
    scanf("%f", &c);
    printf("O valor de c mudou para %f\n", c);

    //lendo letra
    char d = 'y';
    printf("\nO valor de d � %c \n", d);
    fflush(stdin); //limpar antes de usar; limpar o buffer(mem�ria tempor�ria de leitura)
    scanf("%c", &d);
    printf("O valor de d mudou para %c", d);
}
