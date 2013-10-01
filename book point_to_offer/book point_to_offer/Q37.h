//
//  Q37.h
//  book point_to_offer
//
//  Created by Diane on 10/1/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
//untested
#ifndef book_point_to_offer_Q37_h
#define book_point_to_offer_Q37_h

struct LinkNode{
    int data;
    LinkNode* pNext;
};

int LinkLen(LinkNode* phead)
{
    LinkNode *p = phead;
    int count = 0;
    while (p != NULL) {
        count++;
    }
return count;
}
LinkNode* FindFirstJoiningNode(LinkNode* p1, int len1, LinkNode* p2, int len2)
{
    int i = 0;
    LinkNode * cursor1 = p1, *cursor2 = p2;
    while (i < len1-len2) {
        cursor1 = cursor1->pNext;
    }
    
    i = len2;
    while (i--) {
        if (cursor1 == cursor2) {
            return cursor1;
        }
        cursor1 = cursor1->pNext;
        cursor2 = cursor2->pNext;
    }
    return NULL;
}
LinkNode* FindFirstJoiningNode(LinkNode* phead1, LinkNode* phead2)
{
    int len1 = LinkNode(p1);
    int len2 = LinkNode(p2);
    
    if (len1 > len2) {
        return FindFirstJoiningNode(phead1, len1, phead2, len2);
    }
    else
        return FindFirstJoiningNode(phead2, len2, phead1, len1);
}
#endif
