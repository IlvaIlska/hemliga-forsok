#include <string>
#include <iostream>
#include<stdio.h>
#include <cstring>
#include <vector>
using namespace std;

string caesarEncrypt4(string a) //bring in string, shift characters by 4
{
    const int z = (int)a.size() + 1;
    vector <char> byLetter(a.begin(), a.end()); //string to char vector
    int count = 0; 

    while (count < z)
    {
        char changeThis = byLetter[count]; //current char target
        int val = int(changeThis); //place holder for reference on ASCII vals
        int morpher = val; //used to change ASCII value
        if ((val >= 48) && (val <= 57))//if statement for 0-9
        {
            morpher += 4; 
            changeThis = char(morpher);
            byLetter[count] =changeThis;
                if (morpher > 57)//if past asci value for 9, go back to 0
                {
                    morpher -= 10;
                    changeThis = char(morpher);
                    byLetter[count]=changeThis;
                }
        }
        else if ((val >= 65) && (val <= 90))//if statement for a-z
        {
            morpher += 4;
            changeThis = char(morpher);
            byLetter[count] = changeThis;
                if (morpher > 90)//if past ascii value for z, go back to a
                {
                    morpher -= 26;
                    changeThis = char(morpher);
                    byLetter[count] = changeThis;
                }
        }
 
        else if ((val >= 97) && (val <= 122))//if statemnet for A-Z
        {
            morpher += 4;
            changeThis = char(morpher);
            byLetter[count] = changeThis;
                if (morpher > 122)//if past ascii valiue for Z, go back to Z
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
        output.insert(i, 1, byLetter[i]); //char vector to string
    }
    return output; //return 4-shifted string
}