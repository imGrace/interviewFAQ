//
//  main.cpp
//  book point_to_offer
//
//  Created by Diane on 9/30/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#include <iostream>
#include "Q49.h"

using namespace std;
int main(int argc, const char * argv[])
{
    int output = 0;
    char a[] = "12456";
    std::cout << StrToInt(a, output) << std::endl;
    std::cout << output << endl;
    return 0;
}

