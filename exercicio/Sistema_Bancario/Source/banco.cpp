#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Banco {
    public:
        Banco(char nome_[150]) {
            nome = nome_
        }
    private:
        struct Usuario {
            int id;
            string nome;
            double valor;
        };
        int id = 0;
        char nome[150] = 0;
        double dinheiro = 0;
};

int Banco::criar_id(void){
    Banco.
}