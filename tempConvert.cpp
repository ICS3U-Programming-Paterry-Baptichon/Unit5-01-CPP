// Copyright (c) 2022 Paterry Baptichon Junior, All rights reserved
//
// Created by Paterry Baptichon
// Created on 2022-05-10
// This program converts celsius into fahrenheit

#include <iostream>
#include <string>


void Fahrenheit() {
    // this function converts celsius into fahrenheit

    // variable declarations
    int fahrenheitTemp;
    std::string celsiusTemp;
    int celsiusTempInt;

    // input of the user
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsiusTemp;
    std::cout << "" << std::endl;

    // process of  the convertion of degrees celsius to fahrenhit 
    try {
        celsiusTempInt = std::stoi(celsiusTemp);

        fahrenheitTemp = (9 * celsiusTempInt) / 5 + 32;

        // display the fahrenhit value to the user
        std::cout << celsiusTempInt << "°C is equal to " << fahrenheitTemp
                  << "°F " << std::endl;
    } catch (std::invalid_argument) {
        // if user inputs invalid integer display invalid input.
        std::cout << "That's not a temperature! Try again." << std::endl;
    }
}

int main() {
    // this function calls other functions

    // fahrenheit function
    Fahrenheit(); }
