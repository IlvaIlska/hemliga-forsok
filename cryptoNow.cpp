// cryptoNow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include<stdio.h>
using namespace std;

string caesarEncrypt(string a, int cShifter);


int main()
{
    string meta;
    int howMuch;
    std::cout << "Enter your phrase: " <<'\n';
    getline(cin, meta);
    cin.ignore();
    cout << "Enter shift amount: " << '\n';
    cin >> howMuch;
    howMuch %= 26;
    if (howMuch < 0)
    {
        howMuch += 26;
    }
    cout << howMuch << '\n';
    std::cout << "After the CC scramble: " <<'\n'<< caesarEncrypt(meta, howMuch);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
