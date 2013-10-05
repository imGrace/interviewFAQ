//
//  template metaprogram.h
//  book point_to_offer
//
//  Created by Diane on 10/5/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef book_point_to_offer_template_metaprogram_h
#define book_point_to_offer_template_metaprogram_h
////////////////////////////////////////////////////////
template <size_t n>
class Sum {
public:
    enum Value{N = Sum<n-1>::N + n};
};
template <>
class Sum<1> {
public:
    enum Value{N = 1};
};
template <>
class Sum<0> {
public:
    enum Value{N = 0};
};
////////////////////////////////////////////////////////
template <size_t n>
class Fib {
public:
    enum Value{N = Fib<n-1>::N + Fib<n-2>::N};
};
template <>
class Fib<1> {
public:
    enum Value{N = 1};
};

template <>
class Fib<0> {
public:
    enum Value{N = 0};
};
////////////////////////////////////////////////////////
#endif
