//
//  main.cpp
//  book point_to_offer
//
//  Created by Diane on 9/30/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#include <iostream>
#include "Q38.h"

using namespace std;
int main(int argc, const char * argv[])
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(3);
    vec.push_back(3);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout << GetNumOfK(vec, 3);
    return 0;
}

