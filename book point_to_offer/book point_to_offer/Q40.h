//
//  Q40.h
//  book point_to_offer
//
//  Created by Diane on 10/2/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
//untested
#ifndef book_point_to_offer_Q40_h
#define book_point_to_offer_Q40_h

void FindNumsAppearOnce(int data[], int length, int*num1, int* num2)
{
    if (data == NULL || length < 2) {
        return;
    }
    
    int resultExclusiveOR = 0;
    
    for (int i = 0; i<length; i++) {
        resultExclusiveOR ^= data[i];
    }
    
    int j == 0x01;
    int indexBit = 0;
    while ((j&resultExclusiveOR == 0) && (indexBit < 8*sizeof(int))) {
        j = j<<1;
    }
    
    for (int i = 0; i<length; i++) {
        if (data[i]&j) {
            num1 ^= data[i];
        }
        else
            num2 ^= data[i];
    }
}

#endif
