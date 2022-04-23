// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On April 2022
// This is a is it a square or rectangle program

#include <iostream>
#include <iomanip>

int main() {
    // this function is a is it a square or rectangle program
    std::string shapeWidthAsNumber;
    std::string shapeLengthAsNumber;
    float shapeWidth;
    float shapeLength;

    // input
    std::cout << "This program will tell you if your shape "
    "is a square or not!"<< std::endl;
    std::cout << "Note: Do not input Letters, 'A', 'B', "
    "'...', etc!" << std::endl;
    std::cout << "Note: Decimals DO work in this program!" << std::endl;
    std::cout << "Enter your width!: ";
    std::cin >> shapeWidthAsNumber;
    std::cout << "Enter your length!: ";
    std::cin >> shapeLengthAsNumber;

    // process & output
    try {
        shapeWidth = std::stoi(shapeWidthAsNumber);
        shapeLength = std::stoi(shapeLengthAsNumber);
        if (shapeLength == shapeWidth) {
            std::cout << "\nYour object is a square!";
        } else {
            std::cout << "\nYour object is a rectangle!";
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input!";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
