// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program calculates the area of a triangle

#include <iostream>

void CalculateArea(float base, float height) {
    // calculate area
    float area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area of the triangle is " << area << "cm²." << std::endl;
}

int main() {
    // this function get base and height

    std::string baseAsString;
    std::string heightAsString;
    float baseFromUser;
    float heightFromUser;
    // input
    std::cout << "Enter base of triangle (cm) : ";
    std::cin >> baseAsString;
    std::cout << "Enter height of triangle (cm) : ";
    std::cin >> heightAsString;
    std::cout << std::endl;
    try {
        baseFromUser = std::stof(baseAsString);
        heightFromUser = std::stof(heightAsString);
        // call functions
        CalculateArea(baseFromUser, heightFromUser);
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
