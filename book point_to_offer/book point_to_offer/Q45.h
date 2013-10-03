//
//  Q45.h
//  book point_to_offer
//
//  Created by Diane on 10/3/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
#include <list>
#include <iterator>
#ifndef book_point_to_offer_Q45_h
#define book_point_to_offer_Q45_h

int LastRemaining(unsigned int n, unsigned int m)
{
    if (n<1 || m<1) {
        return -1;
    }
    
    unsigned int i=0;
    std::list<int> numbers;
    for (i=0; i<n; i++) {
        numbers.push_back(i);
    }
    
    std::list<int>::iterator current = numbers.begin();
    while(numbers.size() > 1)
    {
        for(int i=1; i<m;++i)
        {
            current++;
            if(current == numbers.end())
            {
                current = numbers.begin();
            }
        }
        std::list<int>::iterator next = ++current;
        if(next == numbers.end())
        {
            next = numbers.begin();
        }
        numbers.erase(--current);
        current = next;
    }
    return *(current);
}


#endif
