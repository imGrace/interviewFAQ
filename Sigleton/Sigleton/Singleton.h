//
//  Singleton.h
//  Sigleton
//
//  Created by Diane on 9/30/13.
//  Copyright (c) 2013 Diane liudi. All rights reserved.
//

#ifndef Sigleton_Singleton_h
#define Sigleton_Singleton_h

template <typename T>
class singleton {
protected:
    singleton(){}
    ~singleton(){}
    singleton(const singleton&);
    singleton& operator=(const singleton&);
public:
    struct createObject{
        createObject(){singleton<T>::getInstance();}
        void donothing()const{};
    };
    static createObject creator;
    static T& getInstance()
    {
        static T instance;
        creator.donothing();
        return instance;
    }
};
template<typename T>
typename singleton<T>::createObject singleton<T>::creator;

class me:public singleton<me>
{
public:
    void sing(){std::cout << "lala"<< std::endl;}
private:
    me(){};
    ~me(){};
    me(const me&);
    me& operator=(const me&);
    friend class singleton<me>;
};


#endif
