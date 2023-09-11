//=============================
// Author: Jack Grimes
// Date: 9-11-23
// Desc: Looking at CIN and String
//=============================

#include <iostream>

using namespace std;
int main()
{
    int valueTooLarge = 2147483647;
    cout << valueTooLarge << endl;
    valueTooLarge = valueTooLarge + 1;
    cout << valueTooLarge << endl;
    char letter = 'A';
    cout << letter << endl;

    char numOne = '1';
    char numTwo = '2';

    cout << numOne + numTwo << endl;
    int notInt = 23.00405043;
       cout << notInt << endl;
}
