#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i = 1234;
    float p = 12.3456f;
    cout << "|" << setw(8) << setfill('*') << hex << i << "|\n" 
    << "|" << setw(6) << setprecision(4) << p << "|" << endl;
}