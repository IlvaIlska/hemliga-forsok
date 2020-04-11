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
        char changeThis = byLetter[count];
        int val = int(changeThis);
        int morpher = val;
        if ((val >= 48) && (val <= 57))
        {
            morpher += 4; 
            changeThis = char(morpher);
            byLetter[count] =changeThis;
                if (morpher > 57)
                {
                    morpher -= 10;
                    changeThis = char(morpher);
                    byLetter[count]=changeThis;
                }
        }
        else if ((val >= 65) && (val <= 90))
        {
            morpher += 4;
            changeThis = char(morpher);
            byLetter[count] = changeThis;
                if (morpher > 90)
                {
                    morpher -= 26;
                    changeThis = char(morpher);
                    byLetter[count] = changeThis;
                }
        }
 
        else if ((val >= 97) && (val <= 122))
        {
            morpher += 4;
            changeThis = char(morpher);
            byLetter[count] = changeThis;
                if (morpher > 122)
                {
                    morpher -= 26;
                    changeThis = char(morpher);
                    byLetter[count] = changeThis;
                }
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