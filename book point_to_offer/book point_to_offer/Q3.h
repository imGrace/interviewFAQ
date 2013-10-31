//
//  Q3.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q3_h
#define book_point_to_offer_Q3_h

int find(int matrix[][], int rows, int lines, int number)
{
    int ifind = false;
    if (matrix != NULL && rows>0 && lines>0) {
        int row = 0;
        int line = lines - 1;
        while (row < rows && line>0) {
            if(matrix[row][line] == number)
            {
                return true;
            }
            else
            {
                matrix[row][line]>number;
                line--;
            }
            row++;
        }
    }
    return ifind;
}


#endif
