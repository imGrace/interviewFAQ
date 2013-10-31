//
//  Q19.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q19_h
#define book_point_to_offer_Q19_h


struct BinaryTreeNode{
    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

BinaryTreeNode* MirrorReverse(BinaryTreeNode* phead)
{
    if (phead == NULL) {
        return NULL;
    }
    BinaryTreeNode* newNode = new BinaryTreeNode;
    newNode->m_nValue = phead->m_nValue;
    newNode->m_pLeft = MirrorReverse(phead->m_pRight);
    newNode->m_pLeft = MirrorReverse(phead->m_pRight);
    return newNode;
}

void MirrorReverse1(BinaryTreeNode* phead)
{
    if (phead == NULL || ((phead->m_pLeft == NULL)&&(phead->m_pRight == NULL))) {
        return;
    }
    BinaryTreeNode *pTemp = phead->m_pRight;
    phead->m_pRight = phead->m_pLeft;
    phead->m_pLeft = pTemp;
    
    MirrorReverse(phead->m_pLeft);
    MirrorReverse(phead->m_pRight);
}

#endif
