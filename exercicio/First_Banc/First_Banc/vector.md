std::vector � uma sequ�ncia din�mica de elementos, onde os elementos s�o armazenados de forma cont�gua na mem�ria.
Ele oferece acesso r�pido aos elementos por meio de �ndices e permite adicionar e remover elementos de forma eficiente.

Para usar um std::vector, siga os passos abaixo:

# Inclua a biblioteca <vector> no seu c�digo.


    #include <vector>

# Declare uma vari�vel do tipo std::vector especificando o tipo de dado que voc� deseja armazenar.
    Por exemplo, para armazenar n�meros inteiros, voc� pode usar std::vector<int>.

    std::vector<int> lista;

# Adicione elementos ao vetor usando o m�todo push_back().

    lista.push_back(10);
    lista.push_back(20);
    lista.push_back(30);

# Acesse os elementos do vetor utilizando �ndices.

    int primeiroElemento = lista[0];
    int segundoElemento = lista[1];

# Obtenha o tamanho do vetor usando o m�todo size().

    int tamanho = lista.size();

# Percorra os elementos do vetor usando loops. Por exemplo, usando um loop for:

    for (int i = 0; i < lista.size(); ++i) {
        int elemento = lista[i];
        // Fa�a algo com o elemento
    }

# Remova elementos do vetor usando o m�todo erase() ou pop_back().
    Por exemplo, para remover o �ltimo elemento:

        lista.pop_back();

    Ou por exemplo, para remover um item especifico:
        
        for (auto it = lista.begin(); it != lista.end(); ++it) {
            if (*it == 3) {
                lista.erase(it);
                break; // Importante para evitar problemas ao modificar o vetor durante a itera��o
            }
        }

O std::vector tamb�m possui muitos outros m�todos �teis, como insert(), clear(), empty(), entre outros. Voc� pode consultar a documenta��o do C++ para obter mais informa��es sobre esses m�todos e suas funcionalidades.

Lembre-se de incluir a biblioteca <vector> no seu c�digo para poder usar o std::vector.