/***************************************************************
Problem: Assignment 3.1
Question: Write a program that prompts the user to enter an integer from 1 to 9 and displays a pyramid, as shown in the following sample run:
Restrictions: You can use a maximum of:
 Two loops (-- for each extra loop)
 One condition (-- for each additional, ++ for none)
Name: DARWISH QUIAMBAO
ID: 1667197
Date: 9/22/18
Status: (complete)
****************************************************************/
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main()
{

    int height;
    std::string str_height;
    std::stringstream ss_height;

    std::cout << "Pyramid Builders International." << std::endl;
    std::cout << "Enter the number of lines: ";
    // gets the number of rows/lines
    getline(std::cin, str_height);
    ss_height << str_height;
    ss_height >> height;
    ss_height.clear();

    while (height < 1 || height > 9) {
        std::cout << "Invalid height. Enter the number of lines: ";
        getline(std::cin, str_height);
        ss_height << str_height;
        ss_height >> height;
    }

    for (int i = 0; i < height; i++) {
        std::cout << std::setw(3 * (height - i - 1) + 1);
        for (int j = i + 1; j > -i; j--) {
            std::cout << std::right << abs(j - 1) + 1 << "  ";
        }
        std::cout << std::endl;
    }
    system("pause");
}