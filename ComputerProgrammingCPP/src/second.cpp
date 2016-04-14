//
//  second.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/13/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "prototype.hpp"

void secondMain() {
    // Declaring a variable to stores the typed word.
    char firstWord[80];
    char secondWord[80];
    
    // Using strupr
    printf("Type an lower cased word: ");
    scanf("%s", firstWord);
    
    printf("Type an upper cased word: ");
    scanf("%s", secondWord);
    
    char copyFirstWord[80];
    strcpy(copyFirstWord, firstWord);
    
    char secondCopyFirstWord[80];
    strcpy(secondCopyFirstWord, copyFirstWord);
    
    char* thirdWord = strcat(copyFirstWord, secondWord);
    
    strupr(firstWord);
    strlwr(secondWord);
    
    printf("First word to upper cased -> %s\n", firstWord);
    printf("Second word to lower cased -> %s\n", secondWord);
    printf("Concat on both words -> %s\n", thirdWord);
    printf("Copy of firstWord before transform on case -> %s", secondCopyFirstWord);
}
