#include <iostream>
using namespace std;

int main(){
    int n=5;
    int &nr = n;
    int *ptr = &nr;
    cout << "n = " << n << " nr = " << nr << '\n';
    n += 2;
    cout << "n = " << n << " nr = " << nr << '\n';
    *ptr = 3;
    cout << "n = " << n << " nr = " << nr << '\n';
}