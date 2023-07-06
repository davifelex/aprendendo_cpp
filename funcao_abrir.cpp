#include <iostream>
using namespace std;

bool abrir(FILE *&arquivo, char *nome){
    if ((arquivo = fopen(nome, "r")) ==NULL){// se o arquivo não existe
        arquivo=fopen(nome, "w");
    } 
    return arquivo != NULL;
}
