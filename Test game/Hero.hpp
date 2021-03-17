//
//  Hero.hpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#ifndef Hero_hpp
#define Hero_hpp

#include <stdio.h>
#include "character basics.hpp"
using namespace std;
class hero : public characterbase{
private:
    
public:
    hero();
    hero(const hero & obj);
    hero(string ,int,int, attack[]);
    hero(string ,int,int, attacks);
    hero(string ,int,int);
    hero & operator = (const hero & obj);
    friend ostream & operator <<(ostream & out, const hero & obj);
    hero & operator =(const attack anatk[]);
    hero & operator=(const attacks & atks);
    hero & operator =(const attack & anatk);
    
};

#endif /* Hero_hpp */
