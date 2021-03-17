//
//  character basics.cpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#include "character basics.hpp"


characterbase :: characterbase(){
    this->name="Bare naked";
    this->health=100;
    this->speed=2;
}

characterbase :: characterbase(string N,int H, int S){
    this->name=N;
    this->health=H;
    this->speed=S;;
}
characterbase :: characterbase(string N,int H, int S, attack obj[]){
    attacks :: operator=(obj);
    this->name=N;
    this->health=H;
    this->speed=S;
    this-> attacks4 = (obj);
}

characterbase :: characterbase(string N,int H, int S, attacks obj){
    attacks :: operator=(obj);
    this->name=N;
    this->health=H;
    this->speed=S;
    this-> attacks4=(obj);
}
void characterbase :: healthdmgwitheffect(attack & atk){
    currenteffect={atk.geteffectname(),atk.getdamageperturn(),atk.geteffectdescription()};
    this->health -= atk.getdamageperturn();
}

void characterbase :: healthdmgwitheffect(const attack atks[], int i ){
    
    this->health -= atks[i].getdamageperturn();
    
}

void characterbase :: healthdmgwitheffect(const attacks & atks, int i){
currenteffect={atks.geteffect_name(i),atks.geteffectdpt(i),atks.geteffect_description(i)};
    
    this->health -= atks.geteffectdpt(i);
}

void characterbase :: healthdmgwitheffect(int i ){
    
    this-> health-=i;
    
}


void characterbase :: setname(string N){
    this->name = N;
}



void characterbase :: sethealth(int H){
    this-> health = H;
}

void characterbase :: setattacks(int i, string AN, int D, string EN, int DPT, string ED){
    attacks4.setattackeverything(i,AN, D, EN, DPT, ED);
}
void characterbase :: setattack(const attack & obj, int i){
    this-> attacks_1 [i] = obj;
}

void characterbase ::setspeed(int S){
    this-> speed = S;
    
}
string characterbase :: getname()const{
    return (this-> name);
}


int characterbase :: gethealth()const{
    return (this->health);
}

void characterbase :: healthdamage(int damage){
    this->health -= damage;
    
}


int characterbase :: getspeed()const{
    return (this-> speed);
}

bool characterbase :: comparespeeds(int herospeed, int enemyspeed){
    bool temp;
    if( herospeed > enemyspeed ){
        temp = true;
    }
    else
        temp = false;
    return temp;
}
characterbase :: ~characterbase(){
}



