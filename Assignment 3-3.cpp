/***************************************************************
Problem: Assignment 3-3
Question: #3 Count uppercase letters
Write a program that prompts the user to enter a string and displays the number of the uppercase letters in the string.Here is a sample run :
Restriction: only one loop and No conditions allowed(if / switch / ? : )
Name: Darwish Quiambao
ID: 1667197
Date: 9/22/2018
Status: (complete)
****************************************************************/
#include <iostream>
#include <string>

int main() {
    int length = 0, counter = 0, numUppercase = 0;
    std::string sentence = "";
    std::cout << "Enter a string: ";
    std::getline(std::cin, sentence);
    length = sentence.length();

    for (counter = 0; counter < length; counter++)
        numUppercase += isupper(sentence.at(counter));
    std::cout << "The number of uppercase letters is " << numUppercase << std::endl;
    system("pause");
}