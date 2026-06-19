#include <iostream>
#include <fstream>

int main() {
    // Create and open a file for writing
    std::ofstream outFile("example.txt");

    // Check if the file is successfully opened
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // Write some data to the file
    outFile << "Hello, world!" << std::endl;
    outFile << "This is a test file." << std::endl;

    // Close the file
    outFile.close();

    // Open the file for reading
    std::ifstream inFile("example.txt");

    // Check if the file is successfully opened
    if (!inFile.is_open()) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    // Read and display the contents of the file
    std::cout << "Contents of the file:" << std::endl;
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    inFile.close();

    // Append additional data to the file
    std::ofstream appendFile("example.txt", std::ios::app);

    // Check if the file is successfully opened
    if (!appendFile.is_open()) {
        std::cerr << "Error opening file for appending!" << std::endl;
        return 1;
    }

    // Append data to the file
    appendFile << "Appending more data." << std::endl;

    // Close the file
    appendFile.close();

    return 0;
}