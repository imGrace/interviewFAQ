//
//  Q16.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q16_h
#define book_point_to_offer_Q16_h

ListNode* ReverseList(ListNode* pHead)
{
    if (pHead == NULL) {
        return NULL;
    }
    
    if(pHead->_next == NULL)
    {
        return pHead;
    }
    else if(pHead->_next->_next == NULL)//2
    {
        ListNode* newHead  = pHead->_next;
        pHead->_next->_next = pHead->_next;
        pHead->_next = NULL;
        return newHead;
    }
    else
    {
        ListNode* preNode = pHead;
        ListNode* Node = pHead->_next;
        ListNode* LaterNode = pHead->_next->_next;
        
        pHead->_next = NULL;
        while(LaterNode != NULL)
        {
            Node->_next = preNode;
            preNode = Node;
            Node = LaterNode;
            LaterNode = Node->_next;
        }
        LaterNode->_next = Node;
        Node->_next = preNode;
        return LaterNode;
    }
}

#endif
