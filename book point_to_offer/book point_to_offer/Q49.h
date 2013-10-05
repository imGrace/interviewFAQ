//
//  Q49.h
//  book point_to_offer
//
//  Created by Diane on 10/5/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q49_h
#define book_point_to_offer_Q49_h

//input
//{
//""
//" "
//"+"
//"-"
//"+23"
//"-245"
//"430000000000000000000000000"//溢出
//"235der"
//"45 789 1";
enum flag {
    Nagative = -1,
    positive = 1
    };
bool isNum(char a)
{
    if (a>'0' && a<'9') {
        return true;
    }
    return false;
}
bool isSpace(char a)
{
    return a==' '?true:false;
}
bool StrToInt(const char* str, int& output)
{
    if (str == NULL || *str == '\0') {
        output = 0;
        return false;
    }
    const char *p = str;
    int flag = positive;
    if(*p == '+' || *p == '-')
    {
        if (*p == '-') {
            flag = Nagative;
        }
        p++;
    }
    if (*p == '\0' || isSpace(*p) || !isNum(*p)) {
        output = 0;
        return false;
    }
    if (strlen(p) > 10) {
        //超过了32位能表示的范围
        output = 0;
        return false;
    }
    while (*p != '\0') {
        if (isNum(*p)) {
            output = output*10 + *p - '0';
        }
        else
        {
            output = 0;
            return false;
        }
        p++;
    }
    if (output < 0) {
        //32位整数溢出
        output = 0;
        return false;
    }
    
    if (flag == Nagative) {
        output = -output;
    }
    return true;
}
#endif
