/***************************************************************
Problem: Assignment 6.3
Question:  Total Template
Write a template for a function called total.
The function will get a list of values and return the running total of the values and the
maximum and minimum value. The number of values is unknown beforehand.
Test the template in a simple driver program that sends values of various types as
arguments and displays the results
Name: Darwish Quiambao
ID: 1667197
Date: 11/10/18
Status: wrong results/incomplete/wrong solution
****************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

template <class T1>

void total(T1 values)
{
    T1 getValues, vectorHolder;
    string s;
    bool flag = false;
    vector<T1> totalNumbers(values);
    for (int i = 0; i < totalNumbers.size(); i++)
    {
        if(vectorHolder == -1)
            cout << "Enter a number: ";
            getline(cin, s);
            stringstream(s) >> vectorHolder; // input values into vector
            totalNumbers.push_back(vectorHolder);
            s.clear();
            
        getValues+= totalNumbers.at(i); // adds all numbers /elements in vector
        totalNumbers.pop_back();
    }
    T1 largest = totalNumbers.at(0); // for finding largest or max element in vector or should I just use my original template function?
    for (unsigned int j = 1; j < totalNumbers.size(); j++)
    {
        if (largest < totalNumbers.at(j))
            largest = totalNumbers.at(j);
    };
    cout << "The total value is: " << getValues <<
        " and the largest value in the container is: " << largest << endl;

    T1 smallest = totalNumbers.at(0); // for finding smallest or min element in vector
    for (unsigned int k = 1; k < totalNumbers.size(); k++)
    {
        if (largest > totalNumbers.at(k))
            largest = totalNumbers.at(k);
    };
    cout << "The smallest value in the container is: " << smallest << endl;
}

int main()
{
    
    int n;
    string s;
    cout << "Enter the number of values you wish to total" << endl;
    getline(cin, s);
    stringstream(s) >> n;
    total(n);

    return 0;
}