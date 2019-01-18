#include <iostream>;
#include <string>;

//Recursion

void retUpper(std::string sentence, int upperCount, int isUpper, int counter) {
    if(counter >= sentence.length()){ std::cout << "Total uppercase letters: " << upperCount << std::endl; return; }
    isUpper = isupper(sentence.at(counter));
    retUpper(sentence, upperCount += isUpper, 0, counter += 1);
}

int main() {
    std::string sentence = "";
    std::cout << "Give me a string: ";
    std::getline(std::cin, sentence);
    retUpper(sentence, 0, 0, 0);
}