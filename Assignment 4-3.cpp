/***************************************************************
Problem: Assignment 4.3
Question: #4 Phone keypads
The international standard letter/number mapping for telephones is shown in the picture.
The following function returns a number given an uppercase letter. Fill in the blank to complete the function
int getNumber(char uppercaseLetter){ return ___________________________________ }
Restrictions:
 The function's body is 1 line,
 No conditional operators/functions including ternary operator
 Must correctly translate all the letters
Write a test program that prompts the user to enter a phone number as a string. 
The input number may contain letters. The program translates a letter (uppercase or lowercase) 
to a digit and leaves all other characters intact. 
Name: Darwish Quiambao
ID: 1667197
Date: 9/22/18
Status: (incomplete - does nothing/does not compile)
****************************************************************/
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

int getNumber(char uppercaseLetter) { return 2; }
int main() 
{
    char letter;
    std::string letters;
    std::stringstream ss1;
    int length = letters.length();
    char a = '2', b = '2', c = '2', d = '3', e = '3', f = '3',
        g = '4', h = '4', i = '4', j = '5', k = '5', l = '5',
        m = '6', n = '6', o = '6', p = '7', q = '7', r = '7',
        s = '7', t = '8', u = '8', v = '8', w = '9', x = '9',
        y = '9', z = '9';


    getline(std::cin, letters);
    ss1 << letters;
    ss1 >> letter;
    
    for (int i = 0; i < length; i++)
    {

        std::cout << getNumber(letter);

    }
        
        system("pause");
}