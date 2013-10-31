//
//  Q14.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q14_h
#define book_point_to_offer_Q14_h

bool isOdd(int Data)
{
    return (Data&0x01) == 1?true:false;
}
void ReorderOddEven(int *pData, unsigned int length)
{
    if(length <= 0|| pData == NULL)
    {
        return;
    }
    
    int pivot = 0, curse = 0;
    while (curse < length)
    {
        if(isOdd(pData[curse]))
        {
            if (pivot != curse)
            {
                swap(pData[curse], pData[pivot++]);
            }
        }
        curse++;
    }
}

#endif
