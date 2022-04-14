// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On April 2022
// This is a is it a square or rectangle program

#include <iostream>
#include <iomanip>



int main() {
    // this function is a is it a square or rectangle program
    std::string widthString;
    std::string lengthString;

    float width;
    float length;

     // input
        std::cout << "This calculator will calculate your "
        "three numbers!" << std::endl;
        std::cout << "Note: this calculator will round to 2 "
        "decimal places!" << std::endl;
        std::cout << "Note: Max number is 100, Min number is 0" << std::endl;
        std::cout << "Enter your first number: ";
        std::cin >> widthString;
        std::cout << "Enter your second number: ";
        std::cin >> lengthString;
    try {
    // process & output
        width = std::stoi(widthString);
        length = std::stoi(lengthString);

        if (length == width) {
            std::cout << "\nYour object is a square!";
        } else { std::cout << "\nYour object is a rectangle!" << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input" << std::endl;
        }
        std::cout << "\nDone." << std::endl;
}
