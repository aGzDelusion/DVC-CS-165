/***************************************************************
Problem: Assignment 4.1
Question: #1 Palindrome integer
Write the functions with the following headers :
// Return the reversal of an integer,
// i.e., flip(456) returns 654
int flip(int number)
// Return true if number is a palindrome
bool isPalindrome(int number)
a) Use the flip function to implement isPalindrome.A number is a palindrome if 
its reversal is the same as itself.For example, flip(3456) displays 6543..
b) Write a test program that prompts the user to enter an integer and reports whether the integer is a palindrome.
Restrictions: no conditions allowed including ternary operator (no if, switch, ? : )
    Hints : body of function isPalindrome is 1 line of code, body of function flip can be as small as 7 lines of code.
Name: Darwish Quiambao
ID: 1667197
Date: September 22 2018
Status: (complete)
****************************************************************/
#include <iostream>
#include <string>
#include <sstream>

int flip(int number=0)
{
    int flippedNumber = 0, remainder=0;
    while (number != 0)
    {
        remainder = number % 10;
        flippedNumber = flippedNumber * 10 + remainder;
        number /= 10;
    }
    return flippedNumber;
};

bool isPalindrome(int number) { return (number == flip(number)); };

int main() {
    int number_int=0, result=0;
    std::string Number="";
    std::stringstream ss1;
        
    std::cout << "Enter a number: ";
        getline(std::cin, Number);
        ss1 << Number;
        ss1 >> number_int;
        
        if (isPalindrome(number_int) == 1)
        {
            std::cout << "The number "<< Number 
                      << " is a Palindrome: " << std::endl
                      << "Reversed equivalent is: "
                      << flip(number_int) << std::endl;
        }
        else
        {
            std::cout << "The number " << Number
                      << " is not a Palindrome: " << std::endl
                      << "Reversed equivalent is: "
                      << flip(number_int) << std::endl;
        }
               
    system("pause");
}