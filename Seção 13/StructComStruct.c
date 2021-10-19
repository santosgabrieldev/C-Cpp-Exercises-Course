#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

struct Aluno{
    int id;
    Data nascimento;
};

int main(){

    //Criando um aluno
    struct Aluno aluno1;
    
    //Modificando Valores
    aluno1.id = 15;
    aluno1.nascimento.ano = 1996;
    aluno1.nascimento.mes = 1;
    aluno1.nascimento.dia = 17;

    //Imprimindo valores
    printf("Nascimento em %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}
