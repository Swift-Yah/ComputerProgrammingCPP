//
//  sixth.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/13/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "prototype.hpp"

void up(int n, int i) {
    if (i > n) {
        return;
    }
    
    printf("%d\n", i);
    
    up(n, i + 1);
}

void down(int n) {
    if (n == 0) {
        return;
    }
    
    printf("%d\n", n);
    
    down(n - 1);
}

void sixthMain() {
    int i;
    
    printf("How much items do you want generate in DESC order? ");
    scanf("%d", &i);
    
    down(i);
    
    printf("\n");
    
    printf("How much items do you want generate in ASC  order? ");
    scanf("%d", &i);
    
    up(i, 0);
}
