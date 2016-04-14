//
//  fifth.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/13/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "prototype.hpp"

void change(int &a, int &b) {
    int c = a;
    
    a = b;
    b = c;
}

void fifthMain() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    change(a, b);
    
    printf("Changed values\n");
    printf("a = %d; b = %d", a, b);
}
