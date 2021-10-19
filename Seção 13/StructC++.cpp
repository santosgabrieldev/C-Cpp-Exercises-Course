#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

//Struct para frutas
struct fruta{
    string cor;
    string nome;
};

int main(){

    //Criando um ponteiro para o struct criado
    fruta *primeiraFruta = new fruta;

    //Modificando valores
    primeiraFruta->cor = "Amarelo";
    primeiraFruta->nome = "Banana";

    //Exibindo Valores
    cout << "Fruta: " << primeiraFruta->nome <<", Cor: " << primeiraFruta->cor;

    //Criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta[2];

    //Modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].cor = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].cor = "Kiwi";

    //Percorrendo e Exibindo valores
    int cont;
    for(cont = 0; cont < 2; cont++){
        //Exibindo valores
        cout << "\nFruta: " << ponteiroListaDeFrutas[cont].nome << ", Cor: " << ponteiroListaDeFrutas[cont].cor;
    }

    return 0;
}