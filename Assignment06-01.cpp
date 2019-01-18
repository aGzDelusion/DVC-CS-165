/***************************************************************
Problem: Assignment 6.1 // Minimum & Maximum Templates
Question: Write templates for the two functions minimum and maximum. The minimum function
should accept two arguments and return the value of the argument that is the lesser of the
two. The maximum function should accept two arguments and return the value of the
argument that is the greater of the two.
Design a simple driver program that demonstrates the templates with various data types
Name: Darwish Quiambao
ID: 1667197
Date: 11/8/18
Status: complete
****************************************************************/
#include <iostream>

using namespace std;

template <typename temp>
temp getMin(temp num1, temp num2)
{
    return(num1 < num2) ? num1 : num2;
};
template <typename temp>
temp getMax(temp num1, temp num2)
{
    return(num1 > num2) ? num1 : num2;
};

int main()
{
    cout << "Comparing Minimums" << endl;
    cout << "Between 2 & 3: " << getMin(2, 3) << endl
        << "Between 3.9 & 2.5: " << getMin(3.9, 2.5) << endl
        << "Between X & Z: " << getMin('X', 'Z') << endl
        << "Between (4*7-6) & (3*9+4) : " << getMin(4 * 7 - 6, 3 * 9 + 4) << endl;

    cout << endl << "Comparing Maximums" << endl;
    cout << "Between 2 & 3: " << getMax(2, 3) << endl
         << "Between 3.9 & 2.5: " << getMax(3.9, 2.5) << endl
         << "Between X & Z: " << getMax('X', 'Z') << endl
         << "Between (4*7-6) & (3*9+4) : " << getMax(4*7-6, 3*9+4) << endl;

    system("pause");
    return 0;
}