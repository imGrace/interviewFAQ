//
//  Q7.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q7_h
#define book_point_to_offer_Q7_h

template <typename T>
class CStack {
    queue<T> queue1;
    queue<T> queue2;
public:
    CStack(void);
    ~CStack(void);
    
    void appendTail(const T& node);
    T deleteHead();
};
template<typename T>
void CStack<T>::appendTail(const T& node)
{
    if (queue1.empty()) {
        queue1.push(node);
    }
    while (!queue1.empty()) {
        queue2.push(queue1.front());
        queue1.pop();
    }
    queue1.push(node);
    while (!queue2.empty()) {
        queue1.push(queue2.front());
        queue2.pop();
    }
}
template <typename T>
T CStack<T>::deleteHead()
{
    T node;
    if (!queue1.empty()) {
        node = queue1.front();
        queue1.pop();
    }
    return node;
}

#endif
