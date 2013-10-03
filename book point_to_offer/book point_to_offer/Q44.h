//
//  Q44.h
//  book point_to_offer
//
//  Created by Diane on 10/3/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
//untested
#include <stdlib.h>
#ifndef book_point_to_offer_Q44_h
#define book_point_to_offer_Q44_h
bool compare(int a, int b)
{
    return a>b?true:false;
}
int partition(int *data, int begin, int end, bool (*fun)(int, int))
{
    int mid = begin/2+end/2;
    std::swap(data[mid], data[begin]);
    
    int value = data[begin];
    int povit = begin+1;
    int i = begin+1;
    while(i<=end)
    {
        if (fun(data[i], value)) {
            std::swap(data[i], data[povit++]);
        }
        i++;
    }
    return povit;
}
void qsort(int *data, int begin, int end, bool (*fun)(int, int))
{
    int pivot = partition(data, begin, end, fun);
    qsort(data, begin, pivot-1, fun);
    qsort(data, pivot-1, end, fun);
}
void qsort(int *data, int length, bool (*fun)(int, int))
{
    return qsort(data, 0, length-1, fun);
}
bool IsContinuous(int* numbers, int length)
{
    if (numbers == NULL || length < 1) {
        return false;
    }
    qsort(numbers, length, compare);
    int numOfZero = 0;
    int i = 0;
    while (i<length && numbers[i] == 0) {
        numOfZero++;
        i++;
    }
    
    int gap = 0;
    int small = i;
    int big = i+1;
    while (big<length) {
        if (numbers[big] == numbers[small]) {
            return false;
        }
        
        numOfZero += numbers[big] - numbers[small] -1;
        small = big;
        big++;
    }
    return (gap > numOfZero)? false:true;
    
}

#endif
