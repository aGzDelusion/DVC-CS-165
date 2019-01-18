#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main()
{

    int height;
    std::string str_height;
    
    std::cout << "Pyramid Builders International." << std::endl;
    std::cout << "Enter the number of lines: ";
    // gets the number of rows/lines
    getline(std::cin, str_height);
    stringstream ss_height(str_height) >> height;
    
    
    while (height < 1 || height > 9) {
        std::cout << "Invalid height. Enter the number of lines: ";
        getline(std::cin, str_height);
        ss_height(str_height) >> height;
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