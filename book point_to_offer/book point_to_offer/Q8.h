//
//  Q8.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q8_h
#define book_point_to_offer_Q8_h

int findMin_recursive(int rotateArray[], int begin, int end)
{
    if (begin == end) {
        return rotateArray[begin];
    }
    if (end-begin == 1) {
        return rotateArray[begin]<rotateArray[end]?rotateArray[begin]:rotateArray[end];
    }
    
    int mid = (begin+end)/2;
    if (rotateArray[mid]>=rotateArray[begin])
    {
        return findMin_recursive(rotateArray, mid, end);
    }
    else
        return findMin_recursive(rotateArray, begin, mid);
}

int findMin(int rotateArray[], int len)
{
    if (rotateArray == NULL || len <= 0) {
        return -1;
    }
    if (rotateArray[0]<rotateArray[len-1]) {
        return rotateArray[0];
    }
    else if (rotateArray[0] == rotateArray[len-1])
    {
        while (len>0) {
            if (rotateArray[0] != rotateArray[--len]) {
                return rotateArray[len];
            }
        }
        return rotateArray[0];
    }
    return findMin_recursive(rotateArray, 0, len-1);
    
}

#endif
