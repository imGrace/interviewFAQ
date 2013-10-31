//
//  heapSort.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_heapSort_h
#define book_point_to_offer_heapSort_h

void heapify(int a[], int begin, int end)//大顶
{
    if (a==NULL || begin>=end || begin<0 || end<0) {
        return;
    }
    for (int i = (end-begin)/2; i >= 0; i--)
    {
        if ((begin+2*i+1) <= end)
        {
            if (a[begin+i] < a[begin+2*i+1]) {
                swap(a[begin+i], a[begin+2*i+1]);
            }
        }
        if (a[begin+i] < a[begin+i*2])
        {
            swap(a[begin+i], a[begin+i*2]);
        }
    }
}

void heapSort(int a[], int len)
{
    for (int i = 0; i<len; i++) {
        heapify(a, i, len);
    }
}

#endif
