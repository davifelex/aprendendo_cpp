#include <iostream>
using namespace std;

struct Ficha {
    char nome[20];
    char email[60];
};

void exibe(const Ficha &f){
    cout << f.nome << ':' << f.email << '\n';
}

int main(void) {
    Ficha usr = {"Davi", "davifelex.programador@gmail.com"};
    exibe(usr);
}