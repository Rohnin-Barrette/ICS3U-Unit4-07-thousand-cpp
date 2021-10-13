// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// this program prints all the numbers from 1000
// - 2000 ending the line every 5 numbers

#include <unistd.h>
#include <iostream>


int main() {
    // this program prints all the numbers from 1000
    // - 2000 ending the line every 5 numbers
    int LOOP_COUNTER = 1000;
    int END_NUMBER = 2000;

    // process
    for (LOOP_COUNTER = 1000; LOOP_COUNTER
            <= END_NUMBER; LOOP_COUNTER++) {
        if (LOOP_COUNTER % 5 == 4) {
            std::cout << LOOP_COUNTER << " " << std::endl;
        } else {
            std::cout << LOOP_COUNTER  <<  " ";
        }
        // prevents terminal buffer from overflowing
        usleep(10);
    }
    std::cout << "\n\nDone." << std::endl;
}
