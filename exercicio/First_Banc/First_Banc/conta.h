#pragma once
#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <vector>
#include "usuarios.h"

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
    int getid(void);
    double getsaldo(void);
    bool sacar(double valor);
    bool depositar(double valor);
    bool receber_transferencia(double valor);
    bool transferir(double valor, int id);
    
    
    std::vector<operacao> getextrato(void);
};
bool criar_conta(Usuario usuario);
Conta* get_conta_com_id(int id);
#endif // CONTA_H
