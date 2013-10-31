//
//  Q21.h
//  book point_to_offer
//
//  Created by Diane on 10/31/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q21_h
#define book_point_to_offer_Q21_h

template <typename T>
struct qStack {
    
    qStack():_min(-1){}
private:
    stack<T> stack_data;
    stack<T> stack_minList;
    T _min;
public:
    T GetMin() const
    {
        return _min;
    }
    bool Empty()
    {
        return stack_data.empty();
    }
    void pop()//必须检测是否empty后才可以调用
    {
        stack_minList.pop();
        _min = stack_minList.top();
        stack_data.pop();
    }
    T top()//必须检测empty
    {
        return stack_data.top();
    }
    void push(T data)
    {
        if (!stack_data.empty()) {
            if(stack_data.top() > data)
            {
                _min = data;
            }
        }
        else _min = data;
        
        stack_data.push(data);
        stack_minList.push(_min);
    }
};

#endif
