#pragma once
#ifndef USUARIOS_H
#define USUARIOS_H
#include <string>
#include <vector>
#include "conta.h"
using namespace std;

class Usuario {
private:
	int id;
	string nome;
	string senha;
public:
	Usuario(int id, string nome, string senha);
	int getid(void);
	string getnome(void);
	bool verificarsenha(string senha);
};

bool cadastrar_usuario(string nome, string senha);

vector<Usuario> get_usuarios(void);

Usuario get_usuario_com_id(int id);

bool deletar_usuario(int id);

bool logar_usuario(Usuario usuario, string senha);



#endif // USUARIOS_H
