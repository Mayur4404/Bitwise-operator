// Name -Mayur bhapkar
// PRN - 23070123507
//E&TC A3
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Pls Enter A Number In Decimal: ";
    cin >> a;
    cout << "Pls Enter Another Number In Decimal: ";
    cin >> b;
    int binary_a = a;
    int binary_b = b;
    cout << "Bitwise AND: " << (binary_a & binary_b) << endl;
    cout << "Bitwise OR: " << (binary_a | binary_b) << endl;
    cout << "Bitwise Xor: " << (binary_a ^ binary_b) << endl;
    cout << "Bitwise Not of A: " << (~binary_a) << endl;
    cout << "Bitwise Not of B: " << (~binary_b) << endl;
    cout << "Left Shift of A: " << (binary_a << 1) << endl;
    cout << "Right Shift of A: " << (binary_a >> 1) << endl;
    return 0;
}
/*
Output
Pls Enter A Number In Decimal: 4
Pls Enter Another Number In Decimal: 8
Bitwise AND: 0
Bitwise OR: 12
Bitwise Xor: 12
Bitwise Not of A: -5
Bitwise Not of B: -9
Left Shift of A: 8
Right Shift of A: 2
*/
