//
//  main.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/13/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "prototype.hpp"

/// A wrapper for run a question solved.
void run() {
    // According the include above, call the main of a question.
    abstractMain();
    
    // Just wrap a single line.
    printf("\n");
}

int main(int argc, const char * argv[]) {
    run();
    
    return 0;
}
