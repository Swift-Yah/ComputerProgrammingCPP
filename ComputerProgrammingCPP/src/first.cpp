//
//  first.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/13/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "prototype.hpp"

void firstMain() {
    char word[80];
    
    printf("Type a upper cased word: ");
    scanf("%s", word);
    
    strlwr(word);
    
    printf("The same word, but lower cased: %s", word);
}
