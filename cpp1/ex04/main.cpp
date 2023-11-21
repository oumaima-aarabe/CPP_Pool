#include <iostream>
#include <fstream>
#include <cstring>

void replacealloccurrences(std::string& content, const std::string& s1, const std::string& s2) {
 
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    const char* filename = argv[1];
    const char* s1 = argv[2];
    const char* s2 = argv[3];

    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return 1;
    }

    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    replacealloccurrences(content, s1, s2);

    std::ofstream outputFile(filename, std::ios::trunc);
    if (!outputFile) {
        std::cerr << "Error: Could not open output file." << std::endl;
        return 1;
    }

    outputFile << content;
    outputFile.close();

    std::cout << "File \"" << filename << "\" has been processed." << std::endl;

    return 0;
}
