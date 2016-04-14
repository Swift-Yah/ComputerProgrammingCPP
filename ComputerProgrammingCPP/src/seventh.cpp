//
//  seventh.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/13/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "prototype.hpp"

void sort(int array[]) {
    for (int a = 0; a < 9; a++) {
        for (int b = 0; (8 - a); b++) {
            if (array[b] > array[b + 1]) {
                int y = array[b];
                array[b] = array[b + 1];
                array[b + 1] = y;
            }
        }
    }
}

void seventhMain() {
    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    sort(numbers);
    
    for (int i = 0; i < 10; i++) {
        printf("%d, ", numbers[i]);
    }
}
