#include <string>
#include <iostream>
#include<stdio.h>
#include <cstring>
#include <vector>
using namespace std;

string caesarEncrypt4(string a)
{
    const int z = (int)a.size() + 1;
    vector <char> byLetter(a.begin(), a.end());
    int count = 0;

    while (count < z)
    {
        int val = byLetter[count];
        
        if ((val >= 48) && (val <= 57))
        {
            byLetter[count] += 4;
                if (val > 57)
                {
                    byLetter[count]-= 10;
                }
        }
        else if ((val >= 65) && (val <= 90))
        {
            byLetter[count] +=4;
                if (val > 90)
                {
                    byLetter[count] -=26;
                }
        }
        else if (val == 32)
        {
            byLetter[count] = 32;
        }
        else if ((val >= 97) && (val <= 122))
        {
            byLetter[count] +=4;
                if (val > 122)
                {
                    byLetter[count] -= 26;
                }
        }
        else
        {
            byLetter[count] += 10;
        }

        ++count;
    }

    string output;
    for (unsigned i = 0; i < byLetter.size(); i++)
    {
        output.insert(i, 1, byLetter[i]);
    }
    return output;
}