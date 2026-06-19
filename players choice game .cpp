#include <iostream>
#include <string>

int main() {
    // Variables to store player's choices and game progress
    std::string playerName;
    char choice;

    // Introduction
    std::cout << "Welcome to the Text-Based Adventure Game!" << std::endl;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, playerName);
    std::cout << "Hello, " << playerName << "! Let's begin the adventure." << std::endl;

    // Storyline
    std::cout << "You find yourself standing in front of a mysterious cave entrance." << std::endl;
    std::cout << "Do you want to enter the cave? (Y/N): ";
    std::cin >> choice;

    // Player's choice affects the outcome
    if (choice == 'Y' || choice == 'y') {
        std::cout << "As you enter the cave, you see two paths branching off." << std::endl;
        std::cout << "Do you want to go left or right? (L/R): ";
        std::cin >> choice;
        if (choice == 'L' || choice == 'l') {
            std::cout << "You chose to go left. You encounter a treasure chest!" << std::endl;
            std::cout << "Congratulations, you found a treasure! You win!" << std::endl;
        } else if (choice == 'R' || choice == 'r') {
            std::cout << "You chose to go right. You encounter a sleeping dragon!" << std::endl;
            std::cout << "Oh no! The dragon wakes up and devours you. Game over!" << std::endl;
        } else {
            std::cout << "Invalid choice! Game over." << std::endl;
        }
    } else if (choice == 'N' || choice == 'n') {
        std::cout << "You decide not to enter the cave and go back home. The end." << std::endl;
    } else {
        std::cout << "Invalid choice! Game over." << std::endl;
    }

    return 0;
}