//
//  Effects.cpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#include "Effects.hpp"

effect :: effect(){
    this->effectname = "None";
    this->dpt = 0;
    this->effect_description = "nothing";
}

effect :: effect (string EN, int DPT, string ED){
    this-> effectname = EN;
    this-> dpt = DPT;
    this-> effect_description = ED;
}

effect :: effect( const effect & obj){
    this-> effectname = obj.effectname;
    this-> dpt= obj.dpt;
    this-> effect_description = obj.effect_description;
}

void effect :: seteffectname(string EN){
    this-> effectname = EN;
}

void effect :: setdamageperturn(int DPT){
    this-> dpt =DPT;
}

void effect :: seteffectdescription (string ED){
    this-> effect_description = ED;
}

string effect :: geteffectname()const{
    return (this->effectname);
}
int effect :: getdamageperturn()const{
    return (this->dpt);
}

string effect :: geteffectdescription()const{
    return (this->effect_description);
}
effect & effect :: operator=(const effect &obj){
    this-> effectname = obj.effectname;
    this-> dpt= obj.dpt;
    this-> effect_description = obj.effect_description;
    return (*this);
}

ostream & operator <<(ostream & out, const effect & obj){
    out<<" Effect: '"<<obj.effectname<<"' This effect does "<<obj.effect_description;
    return (out);
}

effect :: ~effect(){
}
