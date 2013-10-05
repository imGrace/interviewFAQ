//
//  Q48.h
//  book point_to_offer
//
//  Created by Diane on 10/5/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q48_h
#define book_point_to_offer_Q48_h

//sealed, final
#include <iostream>
template <typename T>
class makeSealed{
    makeSealed(){}
    ~makeSealed(){}
public:
    friend T;
};

class fun: virtual public makeSealed<fun> {
public:
    fun(){ std::cout << "fun" << std::endl;}
    ~fun(){}
    virtual void sing()
    {
        std::cout << "lala" << std::endl;
    }
};

//error
//class fun1:public fun {
//public:
//    fun1(){}
//    ~fun1(){}
//};
///////////////////////////////////////////////////
class a1
{
    virtual void func();
};
class b1: public virtual a1 {
    virtual void function();
};

class a2 {
    virtual void func();
};
class b2: public a2{
    virtual void function();
};

class a3{
    virtual void func();
    char x;
};
class b3: public virtual a3
{
    virtual void function();
};

class a4 {
    virtual void func();
    char x;
};
class b4:public a4{
    virtual void function();
};

void Size()
{
    std::cout << "sizeof(a1), sizeof(b1) " << sizeof(a1) << ", " << sizeof(b1) << std::endl;
    std::cout << "sizeof(a2), sizeof(b2) " << sizeof(a2) << ", " << sizeof(b2) << std::endl;
    std::cout << "sizeof(a3), sizeof(b3) " << sizeof(a3) << ", " << sizeof(b3) << std::endl;
    std::cout << "sizeof(a4), sizeof(b4) " << sizeof(a4) << ", " << sizeof(b4) << std::endl;
}
#endif
