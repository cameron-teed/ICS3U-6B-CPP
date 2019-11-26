// Copyright (c) 2019 Cameron All rights reserved.
//
// Created by: Cameron Teed
// Created on: Nov 2019
// This programe calculates the area of a triangle

#include <iostream>
#include <string>
#include <cmath>

void Area(float lenght) {
    // This'll calcilate the area of a triangle

    // declaring area
    // process
    float area =  sqrt(3) * pow(lenght, 2);

    // output
    std::cout << "\nThe surface area is " << area << std::endl;
}

main() {
    // This is asks for the base and hieght, then it  runs area()

    // variables
    std::string stringLenght;
    float lenght = 0;

    while (true) {
        try {
            // input
            std::cout << "What is the lenght: " << std::endl;
            std::cin >> stringLenght;
            // turns variables into float
            lenght = std::stof(stringLenght);

            // runs Area()
            Area(lenght);
            break;
        } catch (std::invalid_argument) {
            std::cout << "Please put in a integer.\n" << std::endl;
            continue;
        }
    }
}
