//
//  main.cpp
//  book point_to_offer
//
//  Created by Diane on 9/30/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#include <iostream>
#include "template metaprogram.h"

using namespace std;
int main(int argc, const char * argv[])
{
    cout << Fib<6>::N << endl;
    return 0;
}

