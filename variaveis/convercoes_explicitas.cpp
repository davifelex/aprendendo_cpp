#include <iostream>
using namespace std;

int uso_notacoes() {
    int i, j;
    double d = 9.87;
    i = (int)d; //Notação cast
    j = int(d); //Notação funcional
    cout << "Notação cast: " << i << '\n' << "Notação funcional: " << j << '\n';
    return 0;
};

 int notacao_funcional_ponteiros() {
    typedef int * ptr;
    int *i;
    double d;
    i = ptr(&d); // noteção funcional com ponteiro;
    cout << "Notação funcional com ponteiros: " << i;
    return 0;
 }

int main() {
    // uso_notacoes();
    notacao_funcional_ponteiros();
}