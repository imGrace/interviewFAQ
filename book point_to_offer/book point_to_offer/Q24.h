//
//  Q24.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q24_h
#define book_point_to_offer_Q24_h

bool isBST(int *data, int begin, int end)
{
    if (end<=begin) {
        return true;
    }
    if (data == NULL) {
        return true;
    }
    
    int cursor = begin;
    bool flag = true;
    
    while (cursor < end) {
        if (data[cursor++] > data[end]) {
            break;
        }
    }
    
    int mid = cursor-1;
    
    while (cursor < end) {
        if (data[cursor++] < data[end]) {
            flag = false;
            break;
        }
    }
    return flag & isBST(data, begin, mid)&isBST(data, mid+1, end);
}

#endif
