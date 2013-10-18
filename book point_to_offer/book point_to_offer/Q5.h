//
//  Q5.h
//  book point_to_offer
//
//  Created by Diane on 10/18/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q5_h
#define book_point_to_offer_Q5_h

void reversePrint(Node *head)
{
    if (head == NULL) {
        return;
    }
    else{
        reversePrint(head->_pnext);
        std::cout << head->_value;
    }
}

#endif
