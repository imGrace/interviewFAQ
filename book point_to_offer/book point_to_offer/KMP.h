//
//  KMP.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_KMP_h
#define book_point_to_offer_KMP_h

bool KMP(char* strPattern, char* strTarget)
{
    if (strTarget == NULL || strTarget == NULL) {
        return false;//?
    }
    int *PartialMatchTable = new int[strlen(strTarget)]();
    initPartialMatchTable(strTarget, PartialMatchTable);
    
    int cursor_strPattern = 0;
    int cursor_strTarget = 0;
    int matchLen = 0;
    
    size_t strTargetLen = strlen(strTarget);
    size_t strPatternLen = strlen(strPattern);
    
    while (cursor_strPattern < strPatternLen && cursor_strTarget < strTargetLen
           && ((strPatternLen-cursor_strPattern)>=(strTargetLen - cursor_strTarget)))
    {
        if(strPattern[cursor_strPattern] != strTarget[cursor_strTarget])
        {
            if (matchLen == 0) {
                cursor_strPattern ++;
            }
            else
            {
                cursor_strTarget = PartialMatchTable[matchLen];
                matchLen = PartialMatchTable[matchLen];
            }
        }
        else
        {
            cursor_strTarget++;
            cursor_strPattern++;
            matchLen++;
        }
    }
    delete []PartialMatchTable;
    if (matchLen == strTargetLen) {
        return true;
    }
    else{
        return false;
    }
    
}

bool myStrCmp(char* a,char*b, int len)
{
    if (a == NULL || b == NULL || len <= 0) {
        return false;
    }
    int flag = true;
    while (len) {
        if (a[--len] != b[len])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
void initPartialMatchTable(char* strTarget, int *PartialMatchTable)
{
    PartialMatchTable[0] = 0;
    size_t strTargetLen = strlen(strTarget);
    for (int i = 1; i < strTargetLen; i++) {
        int matchLen = 0;
        int cursor = 1;
        while (cursor <= i)
        {
            matchLen = i-cursor;
            bool isEqual = myStrCmp(&strTarget[0], &strTarget[cursor++], matchLen+1);
            if (isEqual) {
                matchLen++;
                break;
            }
        }
        PartialMatchTable[i] = matchLen;
    }
}

#endif
