//
//  Q36.h
//  book point_to_offer
//
//  Created by Diane on 9/30/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
#ifndef book_point_to_offer_Q36_h
#define book_point_to_offer_Q36_h

#include <vector>  

int merge(std::vector<int> &vec, int begin, int mid, int end)
{
    int i = begin;
    int j = mid;
    std::vector<int> newData;
    int count = 0;
    while(i < mid && j<=end)
    {
        if (vec[i] > vec[j]) {
            count +=  end-j+1;
            newData.push_back(vec[i++]);
        }
        else if(vec[i] == vec[j])
        {
            newData.push_back(vec[i++]);
            newData.push_back(vec[j++]);
        }
        else
        {
            newData.push_back(vec[j++]);
        }
    }
    
    while (i < mid) {
        newData.push_back(vec[i++]);
    }
    while (j <= end) {
        newData.push_back(vec[j++]);
    }

    i = 0;
    while(begin <= end)
    {
        vec[begin++] = newData[i++];
    }
    return count;
}

int InversePairs(std::vector<int> &vec, int begin, int end)
{
    int count=0;
    int mid = begin/2+end/2;
    if (end == begin) {
        return 0;
    }
    else
    {
        count += InversePairs(vec, begin, mid);
        count += InversePairs(vec, mid+1, end);
        count += merge(vec, begin, mid+1,end);
    }
    return count;
}

int InversePairs(std::vector<int> &vec)
{
    return InversePairs(vec, 0, (int)vec.size()-1);
}

#endif
