// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This is program

#include <iostream>
#include <string>

main() {
    std::string integer1;
    int number;

    std::cout << "This program says number even or odd" << std::endl;
    // input
    std::cout << "Enter the number: ";
    std::cin >> integer1;

    std::cout << "" << std::endl;

    // process & output
    try {
        number = std::stoi(integer1);
        if (number == 0) {
            std::cout << "This is zero" << std::endl;
        } else if (number % 2 == 0) {
            std::cout << "This number is even" << std::endl;
        } else {
            std::cout << "This number is odd" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter number" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
