//
//  main.cpp
//  book point_to_offer
//
//  Created by Diane on 9/30/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#include <iostream>
#include "Q36.h"

using namespace std;
int main(int argc, const char * argv[])
{
    vector<int> vec;
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(1);
    vec.push_back(2);
    
    
    cout << InversePairs(vec);
    return 0;
}

