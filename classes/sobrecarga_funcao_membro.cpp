#include <iostream>
#include <math.h>
using namespace std;

class Complexo {
    public:
        Complexo(double a, double b) { r=a; i=b; }
        Complexo operator+(Complexo c) { return Complexo(r+c.r, i+c.i);}
        void exibe(void) { cout << r << (i<0? "-" : "+") << fabs(i) << "i\n";}
    private:
        double r; // parte real
        double i; // parte imaginária
};

int main(void){
    Complexo a(1,2);
    Complexo b(3, -4);
    Complexo c = a+b; // Uso de operador sobrecarregado
    a.exibe();
    b.exibe();
    c.exibe();
    (a+b+c).exibe();
}
