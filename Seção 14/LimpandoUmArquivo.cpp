#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){

    //Cria o objeto do arquivo
    ofstream meuArquivo;

    //Abre o arquivo
    meuArquivo.open("Texto.txt");

    //Esvazia o arquivo
    meuArquivo << "";

    //Fecha o Arquivo
    meuArquivo.close();

    return 0;
}