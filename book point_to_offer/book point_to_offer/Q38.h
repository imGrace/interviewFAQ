//
//  Q38.h
//  book point_to_offer
//
//  Created by Diane on 10/1/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
#include <vector>
#ifndef book_point_to_offer_Q38_h
#define book_point_to_offer_Q38_h

int FindFirstK(std::vector<int> &data, int K)
{
    int begin = 0;
    int end = (int)data.size();
    int mid = end/2;
    while (begin <= end) {
        if (data[mid] == K) {
            if (mid == 0 || data[mid-1] != K) {
                return mid;
            }
            else
            {
                end = mid-1;
            }
        }
        else if(data[mid] < K)
        {
            begin = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = begin+(end-begin)/2;
    }
    return -1;
}
int FindLastK(std::vector<int> &data, int K)
{
    int begin = 0;
    int end = (int)data.size();
    int mid = end/2;
    while (begin <= end) {
        if (data[mid] == K) {
            if (mid == end || data[mid+1] != K) {
                return mid;
            }
            else
            {
                begin = mid+1;
            }
        }
        else if(data[mid] < K)
        {
            begin = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = begin+(end-begin)/2;
    }
    return -1;
}
int GetNumOfK(std::vector<int> &data, int K)
{
    int first = FindFirstK(data, K);
    int last = FindLastK(data, K);
    
    return last>first?(last-first+1) :-1;
}

#endif
