//
//  Q6.h
//  book point_to_offer
//
//  Created by Diane on 10/18/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q6_h
#define book_point_to_offer_Q6_h

int myfind(int* browse, int len, int value)
{
    int pos=-1;
    while (len != 0) {
        if(browse[--len] == value)
        {
            pos = len;
            break;
        }
    }
    return pos;
}
BinaryTreeNode* ConstructTree(int* frontBrowse, int* midBrowse, int len)
{
    if (len == 0 || frontBrowse == NULL || midBrowse == NULL) {
        return NULL;
    }
    
    BinaryTreeNode* newNode = new BinaryTreeNode;
    newNode->m_nValue = frontBrowse[0];
    
    int pos = myfind(midBrowse, len, newNode->m_nValue);
    if (pos == -1) {
        throw -1;
    }
    newNode->m_nLeft = ConstructTree(frontBrowse+1, midBrowse, pos);
    newNode->m_nRight = ConstructTree(frontBrowse+pos+1, midBrowse, len-pos-1);
    return newNode;
}

#endif
