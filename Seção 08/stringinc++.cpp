#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std; //usar o cin e o cout sem a necessidade de colocar o std:: a todo momento.

int main(){ //em C++ deve-se usar int main, não void main!

    //Definindo uma string
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra: ";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma variável
    cout << "\nA palavra eh: " << palavra;

    system("pause");

    return 0;
}