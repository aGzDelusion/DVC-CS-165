/***************************************************************
Problem: Assignment 3.4
Question: A string is a palindrome if it reads the same forward and backward. 
The words “mom,” “dad,” and “noon,” for example,
are palindromes.
Restriction: maximum one loop allowed
Name: Darwish Quiambao
ID: 1667197
Date: September 22 2018
Status: incomplete(does not run more than once)
****************************************************************/

#include <iostream>
#include <string>
#include <sstream>

int main() {
    char word[20]="";
    std::string s = "";
    std::stringstream ss1;
    int i, j, checker = 0;

    std::cout << "Enter a string: "; 
    getline(std::cin, s);
    ss1 << s;
    ss1 >> word;

    j = strlen(word);

    for (i = 0; i < j; i++) {
        if (word[i] != word[j- i- 1]) {
            checker = 1;
        }
    }

        if (checker) {
            std::cout << word << " is not a Palindrome";
        }
        else {
            std::cout << word << " is a Palindrome";
        }
    system("pause");
}