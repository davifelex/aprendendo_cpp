#include <iostream>
#include "../Headers/usuarios.h"


std::vector<Usuario> listaDeUsuarios;

bool cadastrar_usuario(int id, std::string nome) {
    Usuario usuario = {id, nome};
    listaDeUsuarios.push_back(usuario);
    return true;
}

bool deletar_usuario(int id) {
    for (auto it = listaDeUsuarios.begin(); it != listaDeUsuarios.end(); ++it) {
        if (it->id == id) {
            listaDeUsuarios.erase(it);
            return true;
        }
    }
    return false;
}

void exibir_usuarios(void){
    std::cout << "oi";
}