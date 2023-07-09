#include <iostream>
using namespace std;

class C {
    friend int manipula(C);
    public:
        int h;
    private:
        int x = 0;
};

int manipula(C c){
    cout << "inicia com: " << c.x;
    c.x++; // isso é permitido a uma função amiga
    cout << "Termina com: " << c.x;
    return 0;
}

int main(void){
    C c;
    manipula(c);
}