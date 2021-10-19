#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    float b;
    char c;
    bool d;

    //Passando valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;

    //<------------------------------------->

    //Escrevendo variáveis na tela com C
    printf("Valor: %d\n", a);
    printf("Valor: %.2f\n", b);
    printf("Valor: %c\n", c);
    printf("Valor: %d\n", d);

    //Escrevendo variáveis na tela com C++
    cout << "Valor: " << a;
    cout << "\nValor: " << b;
    cout << "\nValor: " << c;
    cout << "\nValor: " << d;

    //<------------------------------------->

    //Lendo Valores com C
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%c", &c);
    scanf("%d", &d);

    //Lendo valores com C++
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    return 0;
}