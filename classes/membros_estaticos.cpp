#include <iostream>
using namespace std;

class Ex {
    public:
        Ex() {tot++;}
        ~Ex() {tot--;}
        static void total(){
            cout << "Instâncias existentes: " << tot << '\n';
        }
    private:
        static int tot; // indica o total de instâncias existentes
};
int Ex::tot = 0; // a inicialização deve ser feita assim!


int main(void) {
    Ex::total(); // exibe 0, pois nenhuma instância foi criada
    Ex a, b, c;
    Ex::total();
    a.total();
}