//
//  Q35.h
//  book point_to_offer
//
//  Created by Diane on 9/30/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//
#include <string>
#include <map>

#ifndef book_point_to_offer_Q35_h
#define book_point_to_offer_Q35_h


//first character which appear once
char FirstNotRepeatingChar(const std::string &str)
{
    int cursor = 0;
    std::map<char, int> map_char_count;
    while (cursor < str.size()) {
        map_char_count[str[cursor++]]++;
    }
    
    cursor = 0;
    std::map<char, int>::iterator iter;
    while(cursor < str.size())
    {
        iter  = map_char_count.find(str[cursor++]);
        if(iter != map_char_count.end())
        {
            if (iter->second == 1) {
                return iter->first;
            }
        }
    }
    return '\0';
}


#endif
