#ifndef USUARIOS_H
#define USUARIOS_H

#include <vector>
#include <string>

struct Usuario {
    int id;
    std::string nome;
};

extern std::vector<Usuario> listaDeUsuarios;

bool cadastrar_usuario(int id, std::string nome);
bool deletar_usuario(int id);
void exibir_usuarios(void)

#endif // USUARIOS_H
