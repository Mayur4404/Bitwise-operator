// Name - Mayur Bhapkar
// PRN - 23070123507
//ENTC A3
#include <iostream>
using namespace std;

int main() {
    int number;
    int bitToSet, bitToReset;
    int resultSet, resultReset;
    
    cout << "Please enter a number in decimal: ";
    cin >> number;

    cout << "Please enter the bit position to be set: ";
    cin >> bitToSet;

    cout << "Please enter the bit position to be reset: ";
    cin >> bitToReset;

    resultSet = number | (1 << bitToSet);

    resultReset = number & (~(1 << bitToReset));

    cout << "Original number: " << number << endl;
    cout << "Number after setting bit " << bitToSet << ": " << resultSet << endl;
    cout << "Number after resetting bit " << bitToReset << ": " << resultReset << endl;

    return 0;
}
/*
Output
Please enter a number in decimal: 40
Please enter the bit position to be set: 1
Please enter the bit position to be reset: 2
Original number: 40
Number after setting bit 1: 42
Number after resetting bit 2: 40
