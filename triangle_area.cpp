// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program calculates area of a triangle.


#include <iostream>

void CalculateArea(float base, float height) {
    // calculate area
    float area;

    // process
    area = base * height / 2;

    // output
    std::cout << "The area is " << area << "cm^2" << std::endl;
}


main() {
    // this function gets base and width

    std::string base_as_string;
    float base;
    std::string height_as_string;
    float height;

    try {
        // input
        std::cout << "Enter the base of a triangle (cm): " << std::endl;
        std::cin >> base_as_string;
        base = std::stof(base_as_string);
        std::cout << "Enter the height of a triangle (cm): " << std::endl;
        std::cin >> height_as_string;
        height = std::stof(height_as_string);
        std::cout << std::endl;

        // call functions
        CalculateArea(base, height);
    } catch(std::invalid_argument) {
        std::cout << "That was not a valid number." << std::endl;
}}
