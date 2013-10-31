//
//  Q23.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q23_h
#define book_point_to_offer_Q23_h

struct TreeNode {
    TreeNode* _lchild;
    TreeNode* _rchild;
    int _data;
};

void PrintTree(TreeNode *pheap)
{
    queue<TreeNode*> que;
    if (pheap == NULL) {
        return;
    }
    else
        cout << pheap->_data << endl;
    que.push(pheap->_lchild);
    que.push(pheap->_rchild);
    
    if (!que.empty()) {
        TreeNode *p = que.front();
        que.pop();
        if (p != NULL) {
            cout << p->_data;
            que.push(p->_lchild);
            que.push(p->_rchild);
        }
    }
}

#endif
