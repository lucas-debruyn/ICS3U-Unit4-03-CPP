// Copyright (c) 2021 Lucas DeBruyn All rights reserved

// Created by: Lucas DeBruyn
// Created on: Oct 2021
// This program squares each number from 0 up to the users number

#include <iostream>

int main() {
    // This function squares each number from 0 up to the users number

    int counter;
    int answer;
    float integer;

    // Input
    std::cout << "Enter an integer > 0: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        int isDivisible = integer / 1;
        if (!(integer <= 0 || integer >= 0 && isDivisible * 1 == integer)) {
            std::cout << "You entered a decimal number" << std::endl;
        } else if (integer < 0) {
            std::cout << "You did not enter a positive integer." << std::endl;
        } else if (integer == 0) {
            std::cout << "Invalid input" << std::endl;
        } else {
            for (int counter = 0; counter <= integer; counter++) {
                answer = counter * counter;
                std::cout << counter << "² = " << answer << "²" << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
