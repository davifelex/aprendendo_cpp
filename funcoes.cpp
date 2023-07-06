#include <iostream>
using namespace std;

void troca(int &, int &); // parâmetros passados por referência
int main(void) {
    int x= 5, y = 7;
    cout << "Antes: x = " << x << ", y = " << y << '\n';
    troca(x, y);
    cout << "Depois: x = " << x << ", y = " << y << '\n';
}

void troca(int &a, int &b) { //Pâmetros recebidos por referência
    int x = a;
    a = b;
    b = x;
}