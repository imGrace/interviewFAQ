//
//  Q50.h
//  book point_to_offer
//
//  Created by Diane on 10/5/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

//untested
#ifndef book_point_to_offer_Q50_h
#define book_point_to_offer_Q50_h
#include <list>
#include <algorithm>


struct TreeNode{
    int m_data;
    vector<TreeNode *> m_vChild;
};
bool GetNodePath(TreeNode* pRoot, TreeNode* pNode, list<TreeNode*> &path)
{
    if (pRoot == pNode) {
        return true;
    }
    
    path.push_back(pRoot);
    
    bool found = false;
    
    vector<TreeNode*>::iterator i = pRoot->m_vChild.begin();
    while (!found && i<pRoot->m_vChild.end()) {
        found = GetNodePath(*i, pNode, path);
        ++i;
    }
    
    if (!found) {
         path.pop_back();
    }
    return found;
}
TreeNode* GetNodePath(const list<TreeNode*>& path1, const list<TreeNode*>& path2)
{
    TreeNode* pLast = NULL;
    int len1 = std::count(path1.begin(), path1.end());
    int len2 = std::count(path2.begin(), path2.end());
    
    list<TreeNode*>::const_iterator iter1;
    list<TreeNode*>::const_iterator iter2;
    if (len1 > len2) {
        iter1 = path1.begin() + len1-len2;
        iter2 = path2.begin();
    }
    else
    {
        iter1 = path1.begin();
        iter2 = path2.begin() + len2-len1;
    }
    
    while (iter1 != path1.end() && iter2 != path2.end()) {
        if (*iter1 == *iter2) {
            pLast = *iter1;
            break;
        }
        iter1++;
        iter2++;
    }
}
TreeNode* GetLastCommonParent(TreeNode* pRoot, TreeNode* pNode1, TreeNode* pNode2)
{
    if (pRoot == NULL || pNode1 == NULL || pNode2 == NULL) {
        return NULL;
    }
    
    list<TreeNode*> path1;
    GetNodePath(pRoot, pNode1, path1);
    
    list<TreeNode*> path2;
    GetNodePath(pRoot, pNode1, path2);
    
    return GetLastCommonParent(path1, path2);
}
#endif
