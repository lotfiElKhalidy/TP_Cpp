#include <iostream>
#include <string>

int main(int, char **) {
    std::string name, surname, word1, word2;
    int age;

    std::cout << "What's your name ?" << std::endl;
    std::cin  >> name;

    std::cout << "What's your surname ?" << std::endl;
    std::cin  >> surname;

    std::cout << "What is your age ?" << std::endl;
    std::cin  >> age ;

    std::cout << "Hello " << name << surname << ". You are " << age << " years old."<< std::endl;

    std::cout << "Enter a first string :" << std::endl;
    std::cin >> word1;
    
    std::cout << "Enter a second string :" << std::endl;
    std::cin >> word2;

    if (word1.length() == word2.length()) {
        std::cout << "The strings you entered have an equal length which is : " << word1.length() << std::endl;
    } else if (word1.length() < word2.length()) {
        std::cout << "The smallest string is : " << word1 << " with a length of : " << word1.length() << std::endl;
    } else {
        std::cout << "The smallest string is : " << word2 << " with a length of : " << word2.length() << std::endl;
    }
    
    return 0;
}
