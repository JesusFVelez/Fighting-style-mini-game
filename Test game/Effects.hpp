//
//  Effects.hpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#ifndef Effects_hpp
#define Effects_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class effect{
protected:
    string effectname;
    int dpt; //Damage Per Turn
    string effect_description;
public:
    effect();
    effect(string, int, string);
    effect( const effect & obj);
    void seteffectname(string);
    void setdamageperturn(int);
    void seteffectdescription(string);
    string geteffectname()const;
    int getdamageperturn()const;
    string geteffectdescription()const;
    effect & operator=(const effect &obj);
    friend ostream & operator <<(ostream & out, const effect & obj);
    ~effect();
};

#endif /* Effects_hpp */
