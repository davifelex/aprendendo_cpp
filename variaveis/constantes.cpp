#include <iostream>
using namespace std;

int definindo_constantes() {
    const float pi = 3.14;
    const  int meses = 12;
    const char *msg = "Precione enter...";
    cout << pi << '\n' << meses << '\n' << msg << '\n';
    return 0;
}

int ponteiros_constantes() {
    const char * ptr1 = "um"; //Objeto  apontado é constante
    char * const ptr2 = "dois"; //objeto que aponta é constante
    const char * const ptr3 = "três"; //ambos são constantes
    return 0;
}

int main() {
    // definindo_constantes();
    ponteiros_constantes();
}