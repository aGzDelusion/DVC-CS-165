/***************************************************************
Problem: Assignment 5.2
Question: (Print the characters in a string reversely) Write a recursive function that displays a string
reversely on the console using the following header:
void reverseDisplay(const string& s)
Name: Darwish Quiambao
ID: 1667197
Date: 10/12/18
Status: complete
****************************************************************/
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void reverseDisplay(const string& s)
{
    int slen = s.length();
    if (slen == 1)
        cout << s;
    else
    {
        cout << s[slen - 1];
        reverseDisplay(s.substr(0, slen - 1));
    }
}

int main()
{
    string sentence;
    cout << "Enter a string to be reversed: ";
    getline(cin, sentence);
    reverseDisplay(sentence);
    cout << endl;

    system("pause");
    return 0;
}