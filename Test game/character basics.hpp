//
//  character basics.hpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#ifndef character_basics_hpp
#define character_basics_hpp

#include <stdio.h>
#include "characterattacks.hpp"
using namespace std;
class characterbase :public attacks{
protected:
    string name;
    int health;
    attacks attacks4;
    int speed;
    effect currenteffect;
public:
    characterbase();
    characterbase(string, int, int);
    characterbase(string, int, int, attack[]);
    characterbase(string, int, int, attacks);
    void healthdmgwitheffect(attack & atk);
    void healthdmgwitheffect(const attack atks[], int);
    void healthdmgwitheffect(const attacks &atks, int);
    void healthdmgwitheffect(int);
    void setname(string);
    void sethealth(int);
    void setattacks(int, string, int, string, int, string);
    void setspeed(int);
    void setattack(const attack & obj, int);
    string getname()const;
    int gethealth()const;
    void healthdamage(int);
    int getspeed()const;
    bool comparespeeds(int, int);
    ~characterbase();
};

#endif /* character_basics_hpp */
