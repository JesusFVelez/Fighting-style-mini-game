//
//  attack.hpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#ifndef attack_hpp
#define attack_hpp

#include <stdio.h>
#include "Effects.hpp"
using namespace std;
class attack: public effect{
protected:
    string attack_name;
    int attackdamage;
public:
    attack();
    attack(const attack & anatk);
    attack(string, int, string, int, string);
    attack(string, int);
    void setattackname(string);
    void setattackdamage(int);
    virtual void setattackeverything(string, int, string, int, string);
    string getattackname()const;
    int getattackdamage()const;
    attack & operator=(const attack & anatk);
    friend ostream & operator <<(ostream & out, const attack & obj);
    
};

#endif /* attack_hpp */
