//
//  attack.cpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#include "attack.hpp"
attack :: attack(): effect(){
    this->attack_name="flop";
    this->attackdamage=2;
}

attack :: attack (const attack & anatk){
    this->attack_name= anatk.attack_name;
    this->attackdamage = anatk.attackdamage;
    this-> effectname = anatk.effectname;
    this-> dpt= anatk.dpt;
    this-> effect_description=anatk.effect_description;
}

attack :: attack (string AN, int AD, string EN, int DPT, string ED):effect(EN, DPT, ED){
    this-> attack_name = AN;
    this-> attackdamage = AD;
}

attack :: attack (string AN, int D):effect(){
    this-> attack_name= AN;
    this-> attackdamage = D;
}


void attack :: setattackname(string AN){
    this-> attack_name = AN;
}
void attack :: setattackdamage(int D){
    this-> attackdamage = D;
}
void attack :: setattackeverything(string AN, int AD, string EN, int DPT, string ED){
    this-> attack_name=AN;
    this-> attackdamage = AD;
    this-> effectname= EN;
    this-> dpt = DPT;
    this-> effect_description=ED;
}
string attack :: getattackname()const{
    return (this-> attack_name);
}
int attack :: getattackdamage()const{
    return (this-> attackdamage);
}

attack & attack :: operator=(const attack & anatk){
    this-> attack_name= anatk.attack_name;
    this-> attackdamage= anatk.attackdamage;
    this-> effectname = anatk.effectname;
    this-> dpt= anatk.dpt;
    this-> effect_description=anatk.effect_description;
    return (*this);
}

ostream & operator <<(ostream & out, const attack & obj){
out<<obj.attack_name << "("<<obj.attackdamage<<" dmg)"
<<" Effect: '"<<obj.effectname<<"' This effect does "<<obj.effect_description;
    return (out);
}
