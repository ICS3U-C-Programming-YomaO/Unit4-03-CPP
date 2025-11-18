// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program checks if package can be accepter or not
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
#include <iostream>
#include <string>

int main() {
    std::string userInput;
    int userNum;
    size_t pos;

    // get user input
    std::cout << "Please enter a positive integer: ";
    std::cin >> userInput;

    try {
        // convert string to int
        userNum = std::stoi(userInput, &pos);
        // if user inputs a decimal
        if (userInput.length() != pos) {
            std::cout << userInput << " is not a valid integer.";
        } else {
            if (userNum < 0) {
                std::cout << "Please enter a positive integer." << std::endl;
            } else {
                // loop to square user input
                for (int counter = 0; counter <= userNum; ++counter) {
                    int squareValue = counter * counter;
                    std::cout << counter << "² is " << squareValue << std::endl;
                }
            }
        }
        // exception handling
    } catch (...) {
        std::cout << userInput << "Please enter a valid integer."
        << std::endl;
    }
    // display ending message
    std::cout << "Thanks for playing!" << std::endl;
}
