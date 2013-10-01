//
//  Q39.h
//  book point_to_offer
//
//  Created by Diane on 10/1/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
//untested
#ifndef book_point_to_offer_Q39_h
#define book_point_to_offer_Q39_h

struct BinaryTreeNode
{
    int data;
    BinaryTreeNode* lchild;
    BinaryTreeNode* rchild;
};

int TreeDepth(BinaryTreeNode *phead)
{
    if (phead == NULL) {
        return 0;
    }
    int lchildDepth = TreeDepth(phead->lchild);
    int rchildDepth = TreeDepth(phead->rchild);
    
    return lchildDepth>rchildDepth?(lchildDepth+1):(rchildDepth+1);
}

int BlanceTreeDepth(BinaryTreeNode* phead)
{
    if(phead == NULL)
        return 0;
        
    int rchildDepth = BlanceTreeDepth(phead->rchild);
    int lchildDepth = BlanceTreeDepth(phead->lchild);
    
    if (rchildDepth == -1 || lchildDepth == -1) {
        return false;
    }
    int blanceDif = rchildDepth - lchildDepth;
    if (blanceDif <= 1 || blanceDif >= -1) {
        return 1+(rchildDepth>lchildDepth?rchildDepth:lchildDepth);
    }
    return -1;
}
bool isBlance(BinaryTreeNode* phead)
{
    return (BlanceTreeDepth(phead) != -1)?true:false;
}
#endif
