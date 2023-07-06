#include <iostream>
using namespace std;

int declaracao_variavel() {
    cout << "Digite os valores (negativo finaliza): ";
    float soma;
    while (true) {
        float valor;
        cin >> valor;
        if (valor < 0) break;
        soma += valor;
    }
    cout << "\nSoma: " << soma << '\n';
    return 0;
}

int contagem_regressiva() {
    cout << "Contagem regressiva: " << '\n';
    for (int i = 9; i >= 0; i--) {
        cout << i << '\n';
    }
    return 0;
}

int n=10;
int usando_var_global() {
    int n =20;
    {
        int n = 30;
        ::n++; // altera a variavel global
        cout << ::n << " " << n << '\n';
    }
    cout << ::n << " " << n << '\n';
    return 0;
}

int main() {
    // declaracao_variavel();
    // contagem_regressiva();
    usando_var_global();
}