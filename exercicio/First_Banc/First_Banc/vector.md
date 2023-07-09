std::vector é uma sequência dinâmica de elementos, onde os elementos são armazenados de forma contígua na memória.
Ele oferece acesso rápido aos elementos por meio de índices e permite adicionar e remover elementos de forma eficiente.

Para usar um std::vector, siga os passos abaixo:

# Inclua a biblioteca <vector> no seu código.


    #include <vector>

# Declare uma variável do tipo std::vector especificando o tipo de dado que você deseja armazenar.
    Por exemplo, para armazenar números inteiros, você pode usar std::vector<int>.

    std::vector<int> lista;

# Adicione elementos ao vetor usando o método push_back().

    lista.push_back(10);
    lista.push_back(20);
    lista.push_back(30);

# Acesse os elementos do vetor utilizando índices.

    int primeiroElemento = lista[0];
    int segundoElemento = lista[1];

# Obtenha o tamanho do vetor usando o método size().

    int tamanho = lista.size();

# Percorra os elementos do vetor usando loops. Por exemplo, usando um loop for:

    for (int i = 0; i < lista.size(); ++i) {
        int elemento = lista[i];
        // Faça algo com o elemento
    }

# Remova elementos do vetor usando o método erase() ou pop_back().
    Por exemplo, para remover o último elemento:

        lista.pop_back();

    Ou por exemplo, para remover um item especifico:
        
        for (auto it = lista.begin(); it != lista.end(); ++it) {
            if (*it == 3) {
                lista.erase(it);
                break; // Importante para evitar problemas ao modificar o vetor durante a iteração
            }
        }

O std::vector também possui muitos outros métodos úteis, como insert(), clear(), empty(), entre outros. Você pode consultar a documentação do C++ para obter mais informações sobre esses métodos e suas funcionalidades.

Lembre-se de incluir a biblioteca <vector> no seu código para poder usar o std::vector.