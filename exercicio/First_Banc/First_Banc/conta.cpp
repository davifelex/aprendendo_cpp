#include <iostream>
#include <vector>
#include <string>
#include "usuarios.h"
#include "conta.h"
using namespace std;

Conta::Conta(int id) {
	this->id = id;
	this->saldo = 0.0;
	std::vector<operacao> extrato;
	this->extrato = extrato;
}

int Conta::getid(void) {
	return this->id;
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
		op.valor = 0 - valor;
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

bool Conta::receber_transferencia(double valor) {
	double saldo_temp = this->saldo;
	try {
		this->saldo += valor;
		operacao op;
		op.tipo = "Recebimento";
		op.valor = valor;
		this->extrato.push_back(op);
		return true;
	}
	catch(...){
		this->saldo = saldo_temp;
		return false;
	}
	
}

bool Conta::transferir(double valor, int id_alvo) {
	double saldo_temp = this->saldo;
	try {
		Conta* alvo = get_conta_com_id(id_alvo);

		if ((this->saldo - valor) >= 0) {
			this->saldo -= valor;
			alvo->receber_transferencia(valor);
			operacao op;
			op.tipo = "Transferencia";
			op.valor = 0 - valor;
			this->extrato.push_back(op);
			return true;
		}
		else {
			return false;
		}
	}
	catch (...) {
		this->saldo = saldo_temp;
		return false;
	}
	

}

vector <operacao> Conta::getextrato(void) {
	return this->extrato;
}

vector <Conta> contas;

bool criar_conta(Usuario usuario) {
	Conta conta(usuario.getid());
	contas.push_back(conta);
	return true;
}

Conta* get_conta_com_id(int id) {
	for (int i = 0; i < contas.size(); i++) {
		if (id == contas[i].getid()) {
			return &contas[i];
		}
	}
	Conta conta_temp(-1);
	return &conta_temp;
}
