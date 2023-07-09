#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "usuarios.h"
#include "conta.h"

using namespace std;

Usuario::Usuario(int id, string nome, string senha) {
	this->id = id;
	this->nome = nome;
	this->senha = senha;
}

int Usuario::getid(void) {
	return id;
}

string Usuario::getnome(void) {
	return nome;
}

bool Usuario::verificarsenha(string senha) {
	if (this->id != -1 and senha == this->senha) {
		return true;
	}
	else {
		return false;
	}
}

vector <Usuario> lista_usuarios;


list <int> get_ids_em_uso(void){
	list <int> ids;
	for (int i = 0; i < lista_usuarios.size(); i++) {
		ids.push_back(lista_usuarios[i].getid());
	}
	ids.sort();
	return ids;
}

Usuario get_usuario_com_id(int id) {
	for (int i = 0; i < lista_usuarios.size(); i++) {
		if (id == lista_usuarios[i].getid()) {
			return lista_usuarios[i];
		}
	}
	return Usuario(-1, "", "");
}

bool cadastrar_usuario(string nome, string senha) {
	int id = 0;
	list <int> ids = get_ids_em_uso();
	if (ids.size() >= 200) {
		for (auto it = ids.begin(); it != ids.end(); ++it) {
			if (id == *it) {
				id++;
			}
		}
	}
	else {
		if (ids.size() > 0) {
			id = ids.back() + 1;
		}
	}
	
	Usuario user(id, nome, senha);
	lista_usuarios.push_back(user);
	return true;
}

bool deletar_usuario(int id) {
	for (auto it = lista_usuarios.begin(); it != lista_usuarios.end(); ++it) {
		if (it->getid() == id) {
			lista_usuarios.erase(it);
			return true;
		}
	}
	return false;
}


bool logar_usuario(Usuario usuario, string senha) {
	bool resposta = usuario.verificarsenha(senha);
	return resposta;
}

vector <Usuario> get_usuarios(void) {
	return lista_usuarios;
}

