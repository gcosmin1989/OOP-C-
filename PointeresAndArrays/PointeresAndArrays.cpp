// PointeresAndArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int lucky_numbers[5] = {2,3,5,7,9};

    cout << lucky_numbers << endl;
    cout << &lucky_numbers[0] << endl;

    cout << lucky_numbers[2] << endl;
    cout << &lucky_numbers[2] << endl;

    cout << lucky_numbers + 2 << endl;
    cout << *(lucky_numbers + 2) << endl;

    int luckyNumbers[5];
    int size_of_luckyNumbers = sizeof(luckyNumbers) / sizeof(luckyNumbers[0]);
    for (int i = 0; i < size_of_luckyNumbers; i++) {
        cout << "Enter a number: ";
        cin >> luckyNumbers[i];
    }
    
    for (int i = 0; i < size_of_luckyNumbers; i++) {
        cout << *(luckyNumbers+i) << endl;
    }
}

