// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On April 2022
// This is a average number program


#include <iostream>
#include <iomanip>



int main() {
    // this function is a average number program
    std::string numberOneString;
    std::string numberTwoString;
    std::string numberThreeString;

    float numberOne;
    float numberTwo;
    float numberThree;

     // input
        std::cout << "This calculator will calculate your "
        "three numbers!" << std::endl;
        std::cout << "Note: this calculator will round to 2 "
        "decimal places!" << std::endl;
        std::cout << "Note: Max number is 100, Min number is 0" << std::endl;
        std::cout << "Enter your first number: ";
        std::cin >> numberOneString;
        std::cout << "Enter your second number: ";
        std::cin >> numberTwoString;
        std::cout << "Enter your third number: ";
        std::cin >> numberThreeString;
    try {
    // process & output
        numberOne = std::stoi(numberOneString);
        numberTwo = std::stoi(numberTwoString);
        numberThree = std::stoi(numberThreeString);
        float average = ((numberOne + numberTwo + numberThree) /3);
        float actual = static_cast<float>(static_cast<int>(average * 100)) /
        100;

        if (numberOne >= 100 || numberOne < 0) {
            std::cout << "Invalid Number (Number 1)!";
        } else if (numberTwo >= 100 || numberTwo < 0) {
            std::cout << "Invalid Number (Number 2)";
        } else if (numberThree >= 100 || numberThree < 0) {
            std::cout << "Invalid Number (Number 2)";
        } else { std::cout << "The average between your three"
        "numbers is " << actual << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
        }
        std::cout << "\nDone." << std::endl;
}
