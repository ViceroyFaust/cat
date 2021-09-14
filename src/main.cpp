#include <fstream>
#include <iostream>

int main (int argc, char* argv[]) {
    if (argc < 2)
        return 0;
    
    for (int i = 1; i < argc; i++) {
        std::ifstream input (argv[i]);
        // input = 0 when it could not open the file
        if (!input) {
            std::cout << "Error: " << argv[i] << " could not be opened\n";
            return 0;
        }
        std::string output = "";
        // As long as input has not reached EOF, it is > 0
        while (input) {
            std::getline(input, output);
            std::cout << output << std::endl;
        }
    }
    return 0;
}