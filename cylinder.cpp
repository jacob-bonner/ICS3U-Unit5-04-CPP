// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: November 2019
// This program calculates the volume of a cylinder

#include <cmath>
#include <iostream>
#include <iomanip>

float Calculate(int radius, int height) {
    // This function calculates the volume of a cylinder

    // Variables
    const float pi = M_PI;
    float area;

    // Process
    area = (pi*pow(radius, 2))*height;
    return area;
}

int main() {
    // This function takes two inputs then outputs the volume of a cylinder

    // Variables
    int radiusFromUser;
    int heightFromUser;
    float userArea;
    std::string radiusAsString;
    std::string heightAsString;

    // Process
    while (true) {
        std::cout << "Enter the radius of your cylinder here (cm):" \
        << std::endl;
        std::cin >> radiusAsString;
        std::cout << "Enter the height of your cylinder here (cm):" \
        << std::endl;
        std::cin >> heightAsString;
        std::cout << "" << std::endl;

        try {
            radiusFromUser = std::stoi(radiusAsString);
            heightFromUser = std::stoi(heightAsString);
            userArea = Calculate(radiusFromUser, heightFromUser);
            if (radiusFromUser == std::stoi(radiusAsString) && \
                heightFromUser == std::stoi(heightAsString)) {
                std::cout << "The volume of your cylinder is " \
                << userArea << "cm^3" << std::endl;
                break;
            } else {
                std::cout << "Error, unable to process inputs" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Error, one or both inputs not integers" << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
