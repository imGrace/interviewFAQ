//
//  Q43.h
//  book point_to_offer
//
//  Created by Diane on 10/2/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
#include <vector>
#ifndef book_point_to_offer_Q43_h
#define book_point_to_offer_Q43_h

//untested
void Print(int *probabilty, int begin, int end)
{
    //print the odd
}
void PrintProbability(const int number)
{
    if (number < 1) {
        return;
    }
    int *probabilty[2];
    probabilty[0] = new int[number*6+1]();
    probabilty[1] = new int[number*6+1]();
    
    int flag = 0;
    for (int i = 1; i <= 6; i++) {
        probabilty[flag][i] = 1;
    }
    
    for (int i = 2; i <= number; i++) {
        for (int j = 0; j <= i*6; j++) {
            probabilty[1-flag][j] = 0;
        }
        for (int j = i; j <= i*6; j++) {
            for (int j = 1; j <= 6 && (i-j)>0; j++) {
                probabilty[1-flag][i] += probabilty[flag][i-j];
            }
        }
        flag = 1-flag;
    }
    Print(probabilty[1-flag], number, number*2);
    delete [] probabilty[0];
    delete [] probabilty[1];
}


#endif
