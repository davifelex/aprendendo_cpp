#include "../Headers/usuarios.h"
#include <iostream>
using namespace std;





void finalizar(void){
    cout << "Digite 1 para voltar ao menu principal ou 2 para sair\n";
    int responce;
    cin >> responce;
    if (responce == 1){
        main();
    }
}
int main(void){
    
    // // Criando alguns usuários e adicionando ao vetor
    // cadastrar_usuario(1, "João");
    // // Acessando os usuários na lista
    // cout << "Usuários na lista:" << endl;
    // for (const auto& usuario : listaDeUsuarios) {
    //     cout << "ID: " << usuario.id << ", Usuário: " << usuario.nome << endl;
    // }

    cout << "BANCO C++\n";
    cout << "Digite a opção desejada:\n[1] Cadastrar usuário\n[2] Deletar usuario\n[3] Exibir usuarios\n";
    int responce = 0;
    cin >> responce;
    if (responce == 1){
        cadastrar_usuario(1, "João");
        finalizar();
    } 
}