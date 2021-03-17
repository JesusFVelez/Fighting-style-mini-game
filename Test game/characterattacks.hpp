//
//  characterattacks.hpp
//  Test game
//
//  Created by Jesus Velez on 11/9/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#ifndef characterattacks_hpp
#define characterattacks_hpp
#include <iostream>
#include <stdio.h>
#include "attack.hpp"
using namespace std;
class attacks: public attack{
protected:
    attack attacks_1[4];
    int* x = new int;
    
public:
    attacks();
    attacks(const attack & obj);
    attacks(const attack & obj_1,const attack & obj_2, const attack & obj_3,const attack & obj_4 );
    attacks(const attack obj[]);
    attacks(const attack & obj, int);
    attacks(const attacks & obj);
    attack & operator[](int i);
    void setattackeverything(int, string, int, string, int, string);
    void setattack(const attack obj, int );
    int getattackdmg(int)const;
    string getattack_name(int)const;
    string geteffect_name(int)const;
    string geteffect_description(int)const;
    int geteffectdpt(int)const;
    attack getattack(int)const;
    attacks & operator=(const attacks & obj);
    attacks & operator=(const attack anatk[]);
    attacks & operator=(const attack & anatk);
    int geteffect_dpt(int)const;
    friend ostream & operator<<( ostream & out, const  attacks & obj);
    ~attacks();
    
};

#endif /* characterattacks_hpp */
