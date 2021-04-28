// Copyright (c) 2021 Jenoe Balote All rights reserved
//
// Created by Jenoe Balote
// Created on April 2021
// This program calculates the area and perimeter of a rectangle
//     with dimensions inputted by the user

#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter the length of the rectangle (mm): " << std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle (mm): " << std::endl;
    std::cin << width;

    // process
    std::cout << "" << std::endl;
    std::cout << "Area is:" << area << "mm²." << std::endl;
    std::cout << "Perimeter is:" << perimeter << "mm." << std::endl;
}
