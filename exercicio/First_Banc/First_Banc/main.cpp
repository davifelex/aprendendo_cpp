#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "usuarios.h"
#include "conta.h"
using namespace std;

int main(void);

void menu_gerenciar_usuarios(void) {
	cout << "------FIRST BANCK------\n";
	cout << "Escolha a opção que deseja realizar:\n[1]Cadastrar usuário\n[2]Excluir usuário\n[3]Exibir usuários\n[4]Buscar usuário\n[5]Voltar para o menu inicial\n";
	int opcao;
	cin >> opcao;
	if (opcao == 1) {
		cout << "Digite o nome do usuário: ";
		string nome;
		cin >> nome;
		cout << "Digite a senha desejada: ";
		string senha;
		cin >> senha;
		cadastrar_usuario(nome, senha);
	}
	else if (opcao == 2) {
		while (true) {
			int id;
			cout << "Qual o id que deseja excluir?\n";
			cin >> id;
			bool responce = deletar_usuario(id);
			if (responce == false) {
				cout << "Usuário invalido, deseja tentar novamente?\n[1]Sim\n[2]Não\n";
				cin >> opcao;
				if (opcao == 2) {
					break;
				}
			}
			else {
				cout << "Usuário excluido com sucesso.";
				break;
			}
		}
	}
	else if (opcao == 3) {
		vector <Usuario> usuarios = get_usuarios();
		for (int i = 0; i < usuarios.size(); i++) {
			cout << "Id: " << usuarios[i].getid() << "   ||   " << "Nome: " << usuarios[i].getnome() << '\n';
		}
	}
	else if (opcao == 4) {
		while (true) {
			cout << "Qual o id do usuário buscado?" << '\n';
			int id;
			cin >> id;
			Usuario user = get_usuario_com_id(id);
			if (user.getid() == -1) {
				cout << "Usuário invalido\n Gostaria de tentar novamente?\n[1]Sim\n[2]Não\n";
				cin >> opcao;
				if (opcao == 2) {
					break;
				}
			}
			else {
				cout << "Id: " << user.getid() << "   ||   " << "Nome: " << user.getnome() << '\n';
				break;
			}

		}

	}
	else if (opcao == 5) {
		main();
	}
	cout << "Digite 1 para voltar ao menu principal e 2 para sair:\n";
	cin >> opcao;
	if (opcao == 1) {
		menu_gerenciar_usuarios();
	}
}

void menu_gerenciar_contas(Usuario usuario) {
	cout << "------FIRST BANCK------\n";
	string nome = usuario.getnome();
	int id = usuario.getid();
	Conta* conta = get_conta_com_id(id);
	cout << "Bem vindo a sua conta " << nome << '\n';
	cout << "Seu saldo atual é de: R$" << fixed << setprecision(2) << conta->getsaldo() << '\n';
	cout << "Escolha a opção que deseja realizar:\n[1]Depositar\n[2]Sacar\n[3]Transferir\n[4]Exibir extrato\n";
	int opcao;
	cin >> opcao;
	if (opcao == 1) {
		cout << "Digite o valor que deseja depositar:\n";
		double valor;
		cin >> valor;
		if (valor > 0) {
			bool responce = conta->depositar(valor);
			cout << "Seu novo saldo é: R$ " << conta->getsaldo() << '\n';
			if (responce == true) {
				cout << "Deposito realizado com sucesso";
			}
			else{
				cout << "Ocorreu um erro ao tentar fazer o deposito";
			}
		}
		else {
			cout << "O valor do deposito não pode ser abaixo de 1.0";
		}
	}
	else if (opcao == 2) {
		double valor;
		cout << "Digite o valor que deseja sacar:\n";
		cin >> valor;
		if (conta->getsaldo() - valor >= 0) {
			bool responce = conta->sacar(valor);
			if (responce == true) {
				cout << "Saque realizado com sucesso.\n";
			}
			else {
				cout << "Ocorreu um erro ao tentar realizar o saque.\n";
			}
		}
		else {
			cout << "Não é possivel realizar um saque de uma valor superior ao seu saldo.\n";
		}
		
	}
	else if (opcao == 3) {
		cout << "Qual o id da pessoa que deverá receber o dinheiro?\n";
		int id_alvo;
		cin >> id_alvo;
		cout << "Qual o valor que deseja enviar?\n";
		double valor;
		cin >> valor;
		if ((conta->getsaldo() - valor) >= 0) {
			bool responce = conta->transferir(valor, id_alvo);
			if (responce == true) {
				cout << "Transferencia realizada com sucesso";
			}
			else {
				cout << "Ocorreu um erro ao tentar fazer a transferência, verifique os dados e tente novamente";
			}
		}
		else {
			cout << "Saldo insuficiente";
		}
		
	}
	else if (opcao == 4) {
		auto extrato = conta->getextrato();
		for (int i = 0; i < extrato.size(); i++) {
			cout << extrato[i].tipo << "    ||    " << extrato[i].valor << '\n';
		}
	}
	cout << "Digite 1 para voltar ao menu principal e 2 para sair:\n";
	cin >> opcao;
	if (opcao == 1) {
		menu_gerenciar_contas(usuario);
	}
}

int main(void) {
	cout << "------FIRST BANCK------\n";
	cout << "Escolha uma ação:\n[1]Gerenciar usuarios\n[2]Gerenciar contas\n";
	int opcao;
	cin >> opcao;
	if (opcao == 1) {
		menu_gerenciar_usuarios();
	}
	
	else if (opcao == 2) {
		while (true)
		{
			int id;
			cout << "Digite seu id de usuário:";
			cin >> id;
			string senha;
			cout << "Digite sua senha:";
			cin >> senha;
			Usuario user = get_usuario_com_id(id);
			if (logar_usuario(user, senha) == true) {
				cout << "Login realizado com sucesso!\n";
				menu_gerenciar_contas(user);
				main();
				break;
			}
			else {
				cout << "Usuario ou senha incorretos\nDeseja tentar novamente?\n[1]Sim\n[2]Não\n";
				cin >> opcao;
				if (opcao == 2) {
					break;
				}
			}
		}
		
	}
	
}