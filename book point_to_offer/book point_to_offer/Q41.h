//
//  Q41.h
//  book point_to_offer
//
//  Created by Diane on 10/2/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q41_h
#define book_point_to_offer_Q41_h
//untested
bool FindNumbersWithSum(int data[], int length, int sum, int &num1, int &num2)
{
    int i = 0;
    int j = length-1;
    int found = false;
    while (i<j) {
        if (data[i]+data[j] == sum) {
            num1 = i;
            num2 = j;
            found = true;
        }
        else if(data[i]+data[j] < sum)
        {
            i++;
        }
        else
            j--;
    }
    return found;
}

int SumSequence(int data[], int begin, int end)
{
    int sum = 0;
    while (begin<=end) {
        sum += data[begin++];
    }
    return sum;
}
void PrintSequence(int data[], int begin, int end)
{
    while (begin <= end) {
        std::cout << data[begin++] << " ";
    }
    std::cout << std::endl;
}
void FindContinuousSequence(int data[], int length, int sum)
{
    int i = 0;
    int j = 1;
    while (i<length && j<length && data[i]<sum) {
        int sumSoFar = SumSequence(data, i, j);
        if (sumSoFar == sum) {
            PrintSequence(data, i, j);
            i++;j++;
        }
        else if(sumSoFar < sum)
        {
            j++;
        }
        else
            i++;
    }
}
#endif
