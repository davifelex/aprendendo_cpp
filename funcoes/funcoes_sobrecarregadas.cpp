#include <iostream>
using namespace std;

int soma(int a, int b){
    return a + b;
}

int soma(int a, int b, int c){
    return a+b+c;
}

double soma(double a, double b){
    return a + b;
}

int main(void){
    cout << soma(1,2) << '\n';
    cout << soma(3,4,5) << '\n';
    cout << soma(6.7, 8.9) << '\n';
}