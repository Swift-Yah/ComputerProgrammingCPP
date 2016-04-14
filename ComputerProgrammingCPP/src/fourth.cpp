//
//  fourth.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/13/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "prototype.hpp"

float greater(float *grades, long length) {
    float grade = grades[0];
    
    for (int i = 0; i < length; i++) {
        grade = (grades[i] > grade) ? grades[i] : grade;
    }
    
    return grade;
}

float smaller(float *grades, long length) {
    float grade = grades[0];
    
    for (int i = 0; i < length; i++) {
        grade = (grades[i] < grade) ? grades[i] : grade;
    }
    
    return grade;
}

float average(float *grades, long length) {
    float sum = 0;
    
    for (int i = 0; i < length; i++) {
        sum += grades[i];
    }
    
    return sum / length;
}

void fourthMain() {
    long length = 10;
    float grades[length];
    
    for (int i = 0; i < length; i++) {
        printf("Enter the %d grade: ", i);
        scanf("%f", &grades[i]);
    }
    
    printf("Your greater grade is: %.3f\n", greater(grades, length));
    printf("Your smaller grade is: %.3f\n", smaller(grades, length));
    printf("The average of your grades is: %.3f", average(grades, length));
}
