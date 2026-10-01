// Copyright (c) 2026 Immaculata HS All rights reserved.

//

// Created by: Deepak

// Created on: October 2026

// This program shows how local and global variables work

#include <iostream>

// global variable

int variableX = 63;

void localVariable() {
    // this shows what happens with local variables

    int variableX = 36;

    int variableY = 66;

    int variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX

    << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;

    int variableY = 30;

    int variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX

    << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global

    localVariable();

    globalVariable();
}
