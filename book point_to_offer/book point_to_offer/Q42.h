//
//  Q42.h
//  book point_to_offer
//
//  Created by Diane on 10/2/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q42_h
#define book_point_to_offer_Q42_h
void reverse(char data[], int begin, int end)
{
    if (data == NULL) {
        return;
    }
    while (begin < end) {
        std::swap(data[begin++], data[end--]);
    }
}

void ReverseSentence(char *pchar)
{
    if (pchar == NULL) {
        return;
    }
    int len = (int)strlen(pchar);
    reverse(pchar, 0, len-1);
    
    int i = 0;
    int begin=0, end=0;
    while (i<len) {
        if(pchar[i] != ' ') {
            i++;
            end++;
        }
        else if(pchar[i] == ' ' || pchar[i] == '\0')
        {
            reverse(pchar, begin, --end);
            end += 2;
            begin = end;
            i++;
        }
    }
}
void LeftRotationString(char* pStr, int steps)
{
    int len = (int)strlen(pStr);
    reverse(pStr, 0, steps-1);
    reverse(pStr, steps, len-1);
    reverse(pStr, 0, len-1);
}
#endif
