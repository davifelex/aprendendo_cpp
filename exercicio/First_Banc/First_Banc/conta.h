#pragma once
#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <vector>

struct operacao {
    std::string tipo;
    double valor;
};

class Conta {
private:
    int id;
    double saldo;
    std::vector<operacao> extrato;

public:
    Conta(int id);

    double getsaldo(void);
    bool sacar(double valor);
    bool depositar(double valor);
    std::vector<operacao> getextrato(void);
};

#endif // !CONTA_H
