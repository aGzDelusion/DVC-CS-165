/***************************************************************
Problem: Assignment 1.1
Question: Write a program that asks the user for his/her name. The program will
ask the user to enter 3 character values: a letter, a number, and a
symbol (such as: B, 6, and #).
The program will write to the screen the name and "– Character
Formatting". Followed by a message
Followed by the values in original form, decimal, hex, and octal
notation. The output should be written in the format shown below.
Name: Darwish Quiambao
ID: 1667197
Date: 8/31/18
Status: (Complete)**
****************************************************************/

#include <iostream>
#include <iomanip>
#include <bitset>
#include <sstream>
using namespace std;

int main()
{
	string fullName;
	string letter_num_sym;
	char letter;
	int number = 0;
	char symbol;
	string binary1;
	string binary2;
	string binary3;


	// Asks for the full name of the user and is stored in fullName.
	cout << "What is your full name?" << endl;
	getline(cin, fullName);

	// Asks for the three requested values and stores in 'string' letter_num_sym.
	cout << "OK " << fullName << ", please input a letter, number, and a symbol separated by a space: " << endl;
	getline(cin, letter_num_sym);

	// Splits string data input into recognizable data types as declared above.
	stringstream(letter_num_sym) >> letter >> number >> symbol;

	/*Displays the Original form of the inputted characters and also the decimal, octadecimal, hexadecimal representations
	of the original values by using the unary operator '+' to convert characters to ints.*/

	cout << "Output Succeeded!" << endl << fullName << " - Character Formatting" << endl
		<< setw(22) << "letter = " << letter << setw(15) << "number = " << number << setw(15) << "symbol = " << symbol << endl
		<< "Decimal" << setw(15) << dec << +letter << setw(15) << dec << number << setw(15) << dec << +symbol << endl
		<< "Oct    " << setw(15) << oct << +letter << setw(15) << oct << number << setw(15) << oct << +symbol << endl
		<< "Hex    " << showbase << uppercase << setw(15) << hex << +letter << setw(15) << hex << number << setw(15) << hex << +symbol << endl;

	binary1 = bitset<8>(letter).to_string(); // to binary
	binary2 = bitset<8>(number).to_string();
	binary3 = bitset<8>(symbol).to_string();
	cout << "Binary " << setw(15) << binary1 << setw(15) << binary2 << setw(15) << binary3 << endl;

	system("pause");
	return 0;
}