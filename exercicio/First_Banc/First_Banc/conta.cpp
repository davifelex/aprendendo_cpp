#include <iostream>
#include <vector>
#include <string>
#include "usuarios.h"
#include "conta.h"
using namespace std;

Conta::Conta(int id) {
	this->id = id;
	this->saldo = 0.0;
}

double Conta::getsaldo(void) {
	return saldo;
}

bool Conta::sacar(double valor) {
	double temp = this->saldo;
	try {
		this->saldo -= valor;

		operacao op;
		op.tipo = "saque";
		op.valor = valor;
		this->extrato.push_back(op);
		return true;
	}
	catch (...) {
		this->saldo = temp;
		return false;
	}
}

bool Conta::depositar(double valor) {
	double temp = this->saldo;
	try {
		this->saldo += valor;

		operacao op;
		op.tipo = "deposito";
		op.valor = valor;
		this->extrato.push_back(op);
		return true;
	}
	catch (...) {
		this->saldo = temp;
		return false;
	}
}

vector <operacao> Conta::getextrato(void) {
	return this->extrato;
}

vector <Conta> contas;

Conta criar_conta(Usuario usuario) {
	Conta conta(usuario.getid());
	contas.push_back(conta);
	return conta;
}
