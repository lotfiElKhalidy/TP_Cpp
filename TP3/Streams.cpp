#include <iostream>
#include <fstream>

using namespace std;

// Writing into streams
std::string    fileName = "myFile.txt";
std::ofstream  file(fileName.c_str());

int quantity = 10;

if (!file.fail()) {
    file << quantity << std::endl; 
    for (int i = 0; i < quantity; ++i)
        file << i+1 << std::endl;
    
    file.close();
}

// Reading from a stream
ifstream  file2(fileName.c_str());
int i = 0, max;

file2 >> max;

while(!file2.eof() && i<max) {
    double read;
    file2 >> read;
    ++i;
    std::cout << read << " ";
}

file2.close();