//
//  string.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/13/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "string.hpp"

/// Turn all characters in lower case.
char *strlwr(char *str) {
    unsigned char *c = (unsigned char *)str;
    
    while (*c) {
        *c = tolower(*c);
        c++;
    }
    
    return str;
}

/// Turn all characters in upper case.
char *strupr(char *str) {
    unsigned char *c = (unsigned char *)str;
    
    while (*c) {
        *c = toupper(*c);
        c++;
    }
    
    return str;
}
