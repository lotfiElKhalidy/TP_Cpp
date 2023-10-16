#include <iostream>
#include <sstream>

int main(int, char **) {
    std::string   s1;
    std::string   s2("chaine 2");
    std::string   s3 = "chaine 3";
    std::string   s4;

    std::cout << s2 << std::endl;

    // empty string
    std::cout << (s1.empty() ? "chaine vide" : "chaine non vide") << std::endl;
  
    // len
    std::cout << s1.length() << std::endl;

    // capacity
    std::cout << s2.size()   << std::endl;

    // clear a string
    s1.clear();

    std::cout << s3.length() << std::endl;
    
    std::cout << s2.size()   << std::endl;
    
    std::cout << "Type something :" << std::endl;

    // cin doesn't consider spaces and tabulations
    std::cin  >> s4;

    // getline is more suitable with the strings
    getline(std::cin, s1);
    std::cout << "-----" << s3 << std::endl;

    // Operators
    // "==" : compares the length
    if (s2 == s3)
        std::cout << "les chaines sont egales" << std::endl;
    if (s2 != s3)
        std::cout << "les chaines sont differentes" << std::endl;
    if (s2 < s3)
        std::cout << s2 << " est plus petite que " << s3 << std::endl;
    if (s2 > s3)
        std::cout << s2 << " est plus grande que " << s3 << std::endl;
    // compares the content
    if (s2.compare(s3)==0) 
        std::cout << "les chaines sont égales" << std::endl;
    if (s4.compare("loic")==0)
        std::cout << "s4 est identifié :-)" << std::endl;

    // Access a specific char 
    std::cout << s2[2] << std::endl;    // 4eme caractère
    std::cout << s2.at(3) << std::endl; // 4eme caractère
  
    // Modify a specific char
    s2[2]    = 'A';
    s2.at(3) = 'B';

    // Concat.
    s2 += s3;
    std::cout << s2 << std::endl;
    s2.append(s3);
    std::cout << s2 << std::endl;

    // Access a non-modifiable standard C character array version of the string
    std::cout << s2.c_str() << std::endl;
    std::cout << (int) s2.c_str()[s2.length()] << std::endl;

    //Other operators
    //s1.insert(3, s2);           // insert s2 at index 3
    s3.erase(0, 4);             // erase 4 chars from index 0
    s3.replace(2,3,s1);         // replaces a portion of s3 with s1 starting from indexe 2 (3 chars)
    //s1.substr(4,2);             // substring 2 chars starting from index 4
    s4.find("trouve", 4);        // find "trouve" starting from index 4


    // ConvertToString
    std::istringstream iss("1023");
    int i;
    iss >> i;
    std::cout << "i = " << i << "\n";

    // ConvertFromString
    std::ostringstream oss;
    oss << 100;
    std::cout << "Res : " << oss.str() << "\n";
}

// std:endl : \n + flush