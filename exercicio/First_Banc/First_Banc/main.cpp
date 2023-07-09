#include <iostream>
#include <vector>
#include <string>
#include "usuarios.h"
#include "conta.h"
using namespace std;

int main(void);

void menu_gerenciar_usuarios(void) {
	cout << "------FIRST BANCK------\n";
	cout << "Escolha a op��o que deseja realizar:\n[1]Cadastrar usu�rio\n[2]Excluir usu�rio\n[3]Exibir usu�rios\n[4]Buscar usu�rio\n[5]Voltar para o menu inicial\n";
	int opcao;
	cin >> opcao;
	if (opcao == 1) {
		cout << "Digite o nome do usu�rio: ";
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
				cout << "Usu�rio invalido, deseja tentar novamente?\n[1]Sim\n[2]N�o\n";
				cin >> opcao;
				if (opcao == 2) {
					break;
				}
			}
			else {
				cout << "Usu�rio excluido com sucesso.";
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
			cout << "Qual o id do usu�rio buscado?" << '\n';
			int id;
			cin >> id;
			Usuario user = get_usuario_com_id(id);
			if (user.getid() == -1) {
				cout << "Usu�rio invalido\n Gostaria de tentar novamente?\n[1]Sim\n[2]N�o\n";
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

void menu_gerenciar_contas(void) {
	cout << "------FIRST BANCK------\n";
	cout << "";
}

int main(void) {
	cout << "------FIRST BANCK------\n";
	cout << "Escolha uma a��o:\n[1]Gerenciar usuarios\n[2]Gerenciar contas\n";
	int opcao;
	cin >> opcao;
	if (opcao == 1) {
		menu_gerenciar_usuarios();
	}
	
	else if (opcao == 2) {
		while (true)
		{
			int id;
			cout << "Digite seu id de usu�rio:";
			cin >> id;
			string senha;
			cout << "Digite sua senha:";
			cin >> senha;
			Usuario user = get_usuario_com_id(id);
			if (logar_usuario(user, senha) == true) {
				cout << "Login realizado com sucesso!\n";
				menu_gerenciar_contas();
				break;
			}
			else {
				cout << "Usuario ou senha incorretos\nDeseja tentar novamente?\n[1]Sim\n[2]N�o\n";
				cin >> opcao;
				if (opcao == 2) {
					break;
				}
			}
		}
		
	}
	
}