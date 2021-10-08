// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// this program prints all the numbers from 1000
// - 2000 ending the line every 5 numbers

#include <unistd.h>
#include <iostream>


int main() {
    int loop_counter = 1000;
    int end_number = 2000;

    // process
    for (loop_counter = 1000; loop_counter
            <= end_number; loop_counter++) {
        if (loop_counter % 5 == 4) {
            std::cout << loop_counter << " " << std::endl;
        } else {
            std::cout << loop_counter  <<  " ";
        }
        // prevents terminal buffer from overflowing
        usleep(10);
    }
    std::cout << "Done." << std::endl;
}
