/***************************************************************
Problem: Assignment 3.2
Question: #2 Random Number Guessing Game
Write a program that generates a random number between 1...100 and asks the user to guess what the number is.
If the user's guess is higher than the random number, the program should display “Too high, try again”.
If the user s guess is lower than the random number, the program should display “Too low, try again”.
The program should use a loop that repeats until the user correctly guesses the random number.
The program will keep a count of the number of guesses that the user makes.
When the user correctly guesses the random number, the program should display the number of guesses.
Name: Darwish Quiambao
ID: 1667197
Date: 9/14/2018
Status: complete
****************************************************************/

#include <ctime>
#include <iostream>
#include <string>
#include <sstream>
#include <random>

int main()
{
    std::string num_ss; // for stringstream later
    int guess = 0, number = 0, tries = 0;
    //uses ctime library for random #
    srand(time(NULL));
    number = rand() % 100 + 1;
    while (guess != number)
    {
        std::cout << "Guess a number between 0 and 100: ";
        std::getline(std::cin, num_ss);
        // converts string to int
        std::stringstream(num_ss) >> guess;
        std::cout << num_ss << std::endl;
        if (guess > number)
            std::cout << "Too high, try again" << std::endl;
        else if (guess < number)
            std::cout << "Too low, try again" << std::endl;
        else
            std::cout << "Great, you guessed it!" << std::endl;
        tries++;
    }
    //displays the number of tries
    std::cout << "It took " << tries << " tries to guess the number" << std::endl;
    system("pause");
    return 0;

}