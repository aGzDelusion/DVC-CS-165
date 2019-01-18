/***************************************************************
Problem: Assignment 6.2
Question: Write a function template that accepts an argument and returns its absolute value.
The absolute value of a number is its value with no sign. For example, the absolute value of
-5 is 5, and the absolute value of -2 is 2.
Test the template in a simple driver program.
Name: Darwish Quiambao
ID: 1667197
Date: 11/8/18
Status: complete
****************************************************************/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <typename temp>
temp getAbs(temp a)
{
    return (a < 0) ? -a : a;
}

int main()
{

    int a = 0;
    double b = 0.0;

    string getInput;

        cout << "Enter a NEGATIVE WHOLE number and DECIMAL number to return the equivalent absolute value" << endl;
        getline(cin, getInput);
        stringstream(getInput) >> a;
        getInput.clear();
        getline(cin, getInput);
        stringstream(getInput) >> b;
        getInput.clear();
        cout << getAbs(a) << endl << getAbs(b) << endl;

    system("pause");
    return 0;
}