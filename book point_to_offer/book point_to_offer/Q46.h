//
//  Q46.h
//  book point_to_offer
//
//  Created by Diane on 10/4/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_Q46_h
#define book_point_to_offer_Q46_h

class CData{
private:
    static int n;
    static int sum;
public:
    explicit CData();
    static size_t GetSum(){ return sum;}
    void Reset(){n=0; sum=0;}
};

int CData::n = 0;
int CData::sum = 0;

CData::CData()
{
    n++;
    sum += n;
}

size_t SumUnderCripyRequire(size_t n)
{
    CData *a = new CData[n];
    delete a;
    return CData::GetSum();
}

/////////////////////////////////////////////////////////
typedef size_t (*fun)(size_t n);
static fun pFunc[2];
size_t funContinue(size_t n)
{
    return n+pFunc[!n](n-1);
}
size_t funReturn(size_t n)
{
    return 0;
}
size_t SumSelution_1(size_t n)
{
    pFunc[0] = funContinue;
    pFunc[1] = funReturn;
    
    return funContinue(n);
}

///////////////////////////////////////////////////////////
class A;
A *object[2];
class A
{
public:
    virtual size_t Sum(size_t n)
    {
        return 0;
    }
};
class B:public A {
public:
    size_t Sum(size_t n)
    {
        return n+object[!n]->Sum(n-1);
    }
};
size_t SumSelution_2(size_t n)
{
    if (n < 1) {
        return 0;
    }
    A a;
    B b;
    object[1] = &a;
    object[0] = &b;
    return object[0]->Sum(n);
}

#endif
