// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program is the even better number game

#include <iostream>
#include <random>

int main() {
    // This function is the better number game

    int guessed_number;
    int someRandomNumber;
    std::string guessed_number_as_string;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 10);
    someRandomNumber = idist(rgen);

    // Input, Process and Output
    while (true) {
        std::cout << "Pick a number between 0-10: ";
        std::cin >> guessed_number_as_string;
        std::cout << "" << std::endl;

    try {
        guessed_number = std::stoi(guessed_number_as_string);

        if (guessed_number == someRandomNumber) {
            std::cout << "You guessed the correct number. " << std::endl;
            break;
        } else if (guessed_number > someRandomNumber) {
            std::cout << "You guessed too high, try again." << std::endl;
        } else {
            std::cout << "You guessed too low, try again" << std::endl;
        }
        } catch (std::invalid_argument) {
            std::cout << "That was not a valid input." << std::endl;
            break;
    }
    }


    std::cout << ("\nDone.") << std::endl;
}
