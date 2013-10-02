//
//  main.cpp
//  book point_to_offer
//
//  Created by Diane on 9/30/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#include <iostream>
#include "Q42.h"

using namespace std;
int main(int argc, const char * argv[])
{
    char data[] = "i m liudi.";
    cout << data << endl;
    LeftRotationString(data, 3);
    cout << data << endl;
    return 0;
}

