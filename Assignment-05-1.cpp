/***************************************************************
Problem: Assignment 5.1
Question: (Occurences of a specified character in a string) Write a recursive function
that finds the number of occurrences of a specified letter in a string using the following function header
int cout(const string& s, char a)
Name: Darwish Quiambao
ID: 1667197
Date: 10/12/18
Status: complete
****************************************************************/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int count(const string& s, char a)
{
    int found = s.find(tolower(a));
    return(found == s.npos) ? 0 : (1 + count(s.substr(found + 1), a));
}

int main()
{
    string s, placeHolder;
    stringstream ss1;
    char letter;
        cout << "Enter a string to count the number of instances a letter occurs: ";
            getline(cin, s);
        cout << endl << "Enter the letter to look for: ";
            getline(cin, placeHolder);
            ss1 << placeHolder;
            ss1 >> letter;
            ss1.clear();

        cout << "The number of occurrences of the letter '" << letter
            << "' in the sentence --> " << s << " <-- is: " << count(s, letter) << endl;

    system("pause");
    return 0;

}