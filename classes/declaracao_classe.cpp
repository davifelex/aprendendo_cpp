#include <iostream>
using namespace std;

class Data {
    public:
        void define(short d, short m, short a);
        // void define(short d, short m, short a){
        //     data = ((a-1980) << 9) | (m<<5) |d;
        // }
        void exibe(void);
    private:
        usigned short data;
};

void Data::define(short d, short m, short a){
    data = ((a-1980) << 9) | (m<<5) |d;
}

void Data::exibe(void){
    cout << setw(2) << setfill('0') << (data & 0x1F) << "/"
    << setw(2) << setfill('0') << ((data>>5) & 0xF) << "/"
    << (data>>9) + 1980 << '\n';
}
