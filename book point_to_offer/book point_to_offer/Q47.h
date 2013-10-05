//
//  Q47.h
//  book point_to_offer
//
//  Created by Diane on 10/5/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q47_h
#define book_point_to_offer_Q47_h

int add(int num1, int num2)
{
    int sum = 0, carry = 0;
    do {
        sum = num1^num2;
        carry = num1&num2;
        
        num1 = sum;
        num2 = carry;
    } while (carry != 0);
    return sum;
}


#endif
