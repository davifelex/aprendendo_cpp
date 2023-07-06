#include <iostream>
using namespace std;


int init_struct() {
    struct Ficha {
        char * nome;
        char *fone;
    };
    Ficha f, *pf;
    return 0;
}

int init_enum() {
    enum Logico { falso, verdade};
    Logico ok;
    ok = falso;
    ok = 0; // Erro em c++, ok não é do tipo int 
    ok = Logico(0);// Converção explícita permitida
    return 0;
}

int main() {
    init_struct();
    init_enum();
}
