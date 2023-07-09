#include <iostream>
using namespace std;

class Pilha {
    public:
        Pilha(int);
        ~Pilha(void);
        void insere(int);
        int remove(void);
        int topo(void);
        bool vazia(void);
        bool cheia(void);
    private:
        int max;
        int top;
        int *mem;
};

Pilha::Pilha(int n){
    max = n;
    top = -1;
    mem = new int[n];
}

Pilha::~Pilha(void){
    delete[] mem;
}

void Pilha::insere(int e){
    if (!cheia()){
        mem[++top] = e;
    }else{
        cout << "Pilha cheia" << '\n';
    }
}

int Pilha::remove(void){
    if (!vazia()){
        return mem[top--];
    }else{
        cout << "Pilha vazia!" << '\n';
        return 0;
    }
}

int Pilha::topo(void){
    if (!vazia()){
        return mem[top];
    }else{
        cout << "Pilha vazia" << '\n';
        return 0;
    }
}

bool Pilha::vazia(void){
    return top == -1;
}

bool Pilha::cheia(void){
    return top ==max-1;
}

int main(void){
    Pilha p(32);
    unsigned n;

    cout << "Número positivo?";
    cin >> n;
    do {
        p.insere(n%2);
        n /= 2;
    }while(n!=0);
    cout << "Binário: ";
    while(!p.vazia()){
        cout << p.remove();
        cout << '\n';
    }
}