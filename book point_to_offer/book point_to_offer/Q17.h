//
//  Q17.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q17_h
#define book_point_to_offer_Q17_h


ListNode* Merge(ListNode* pHead_1, ListNode* pHead_2){
    if (pHead_1 == NULL && pHead_2 == NULL) {
        return NULL;
    }
    else if(pHead_1 == NULL && pHead_2 != NULL)
        return pHead_2;
    else if(pHead_2 == NULL && pHead_1 != NULL)
        return pHead_1;
    else
    {
        ListNode* cursor_1 = pHead_1;
        ListNode* cursor_2 = pHead_2;
        vector<int> vecOrderedData;
        while(cursor_1 != NULL && cursor_2 != NULL){
            if (cursor_1->_data <= cursor_2->_data) {
                vecOrderedData.push_back(cursor_1->_data);
                cursor_1 = cursor_1->_next;
            }
            else
            {
                vecOrderedData.push_back(cursor_2->_data);
                cursor_2 = cursor_2->_next;
            }
        }
        if(cursor_1 != NULL)
        {
            while (cursor_1 != NULL) {
                vecOrderedData.push_back(cursor_1->_data);
                cursor_1 = cursor_1->_next;
            }
        }
        else if(cursor_2 != NULL)
        {
            while (cursor_2 != NULL) {
                vecOrderedData.push_back(cursor_2->_data);
                cursor_2 = cursor_2->_next;
            }
        }
        cursor_1->_next = cursor_2;
        cursor_1 = pHead_1;
        for (int i = 0; i < vecOrderedData.size(); i++) {
            cursor_1->_data = vecOrderedData[i];
            cursor_1 = cursor_1->_next;
        }
        return pHead_1;
    }
}


#endif
