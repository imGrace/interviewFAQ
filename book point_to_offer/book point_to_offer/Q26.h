//
//  Q26.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q26_h
#define book_point_to_offer_Q26_h

struct ComplexListNode {
    ComplexListNode(){
        m_pNext = NULL;
        m_pSibling = NULL;
    }
    int m_nValue;
    ComplexListNode* m_pNext;
    ComplexListNode* m_pSibling;
};
ComplexListNode* insertNewNode(ComplexListNode* node)
{
    if (node == NULL)
    {return NULL; }
    ComplexListNode* newNode = new ComplexListNode;
    newNode->m_nValue = node->m_nValue;
    newNode->m_pNext = node->m_pNext;
    node->m_pNext = newNode;
    return newNode->m_pNext;
}
void SetSibling(ComplexListNode *pHead)
{
    if (pHead == NULL) {
        return;}
    ComplexListNode* cursor = pHead;
    while (cursor != NULL && cursor->m_pNext != NULL) {
        if (cursor->m_pSibling != NULL) {
            cursor->m_pNext = cursor->m_pSibling->m_pNext;
        }
        else
            cursor->m_pNext->m_pSibling = NULL;
        cursor = cursor->m_pNext->m_pNext;
    }
}
void splitList(ComplexListNode *pHead)
{
    if (pHead == NULL || pHead->m_pNext == NULL) {
        return;}
    ComplexListNode* cursor = pHead;
    ComplexListNode* cursor_next = pHead->m_pNext;
    while (cursor->m_pNext!= NULL && cursor_next->m_pNext != NULL) {
        cursor->m_pNext = cursor->m_pNext->m_pNext;
        cursor_next->m_pNext = cursor_next->m_pNext->m_pNext;
        cursor = cursor->m_pNext->m_pNext;
        cursor_next = cursor_next->m_pNext->m_pNext;
    }
    cursor = NULL;
    cursor_next = NULL;
}

ComplexListNode* Clone(ComplexListNode* pHead)
{
    if (pHead == NULL)
    {
        return NULL;
    }
    
    ComplexListNode* cursor = pHead;
    do {
        cursor = insertNewNode(cursor);
    } while (cursor != NULL);
    
    SetSibling(pHead);
    
    ComplexListNode* CloneHead = pHead->m_pNext;
    splitList(pHead);
    
    return CloneHead;
}

#endif
