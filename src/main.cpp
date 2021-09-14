#include <fstream>
#include <iterator>
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
        std::copy(std::istreambuf_iterator<char>(input), std::istreambuf_iterator<char>(), std::ostreambuf_iterator<char>(std::cout));
    }
    return 0;
}