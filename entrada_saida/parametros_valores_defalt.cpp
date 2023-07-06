#include <iostream>
#include <stdlib.h>
using namespace std;

void exibe(int num, int base=10); // base tem valor defalt = 10

int main(void){
    exibe(13); //decimal, por defalt
    exibe(13, 2); //binario
    exibe(13, 16);//hexadecimal
}

void exibe(int num, int base){
    char str[100];
    itoa(num, str, base);
    cout << str << '\n';
}