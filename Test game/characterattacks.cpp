//
//  characterattacks.cpp
//  Test game
//
//  Created by Jesus Velez on 11/9/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#include "characterattacks.hpp"


attacks :: attacks(){
    
}

attacks :: attacks(const attack & obj){
    attack :: operator =(obj);
    this-> attacks_1[0] = obj;
    *x = 69;
}


attacks :: attacks(const attack & obj_1,const attack & obj_2, const attack & obj_3,const attack & obj_4 ){
    attack:: operator =(obj_1);
    attack:: operator =(obj_2);
    attack:: operator =(obj_3);
    attack:: operator =(obj_4);
    this-> attacks_1[0]= obj_1;
    this-> attacks_1[1]= obj_2;
    this-> attacks_1[2]= obj_3;
    this-> attacks_1[3]= obj_4;
}

attacks :: attacks(const attack & obj,int i){
    attack :: operator =(obj);
    this-> attacks_1[i]=obj;
    
}
attacks :: attacks (const attack obj[]){
attack :: operator =(obj[0]);
attack :: operator =(obj[1]);
attack :: operator =(obj[2]);
attack :: operator =(obj[3]);
this-> attacks_1[0]= (obj[0]);
this-> attacks_1[1]= (obj[1]);
this-> attacks_1[2]= (obj[2]);
this-> attacks_1[3]= (obj[3]);
}

attacks :: attacks ( const attacks & obj){
    this-> attacks_1[0]= obj.attacks_1[0];
    this-> attacks_1[1]= obj.attacks_1[1];
    this-> attacks_1[2]= obj.attacks_1[2];
    this-> attacks_1[3]= obj.attacks_1[3];
}

int attacks :: getattackdmg(int i)const{
    return(attacks_1[i].getattackdamage());
}

string attacks :: getattack_name(int i)const{
    return(attacks_1[i].getattackname());
}

string attacks :: geteffect_name(int i)const{
    return(attacks_1[i].geteffectname());
}

string attacks :: geteffect_description(int i)const{
    return(attacks_1[i].geteffectdescription());
}

int attacks :: geteffect_dpt(int i)const{
    return(attacks_1[i].getdamageperturn());
}

attack attacks :: getattack(int i)const{
    return (this->attacks_1[i]);
}
int attacks :: geteffectdpt(int i)const{
     return (this->attacks_1[i].getdamageperturn());
    
}
attack & attacks :: operator[](int i){
    return ((this-> attacks_1)[i]);
}
void attacks :: setattackeverything(int i,string AN, int AD, string EN, int DPT, string ED){
    
attacks_1[i].setattackeverything(AN, AD, EN, DPT, ED);
    
    
}

void attacks :: setattack(const attack obj,int i){
    attack :: operator =(obj);
    this-> attacks_1[i]=(obj);
}


attacks & attacks :: operator= (const attacks &obj){
    attack ::operator=(obj.getattack(0));
    attack ::operator=(obj.getattack(1));
    attack ::operator=(obj.getattack(2));
    attack ::operator=(obj.getattack(3));
this->attacks_1[0]= obj.getattack(0);
this->attacks_1[1]= obj.getattack(1);
this->attacks_1[2]= obj.getattack(2);
this->attacks_1[3]= obj.getattack(3);

    return (*this);
}

attacks & attacks :: operator = (const attack anatk[]){
    attack :: operator =(anatk[0]);
    attack :: operator =(anatk[1]);
    attack :: operator =(anatk[2]);
    attack :: operator =(anatk[3]);
this-> attacks_1[0]= (anatk[0]);
this-> attacks_1[1]= (anatk[1]);
this-> attacks_1[2]= (anatk[2]);
this-> attacks_1[3]= (anatk[3]);
    return(*this);
}


attacks & attacks :: operator = (const attack & anatk){
    attack :: operator =(anatk);
    this-> attacks_1[0]= (anatk);
    return(*this);
}

ostream & operator <<(ostream & out, const attacks & obj){
   out<<obj.attacks_1[0] << endl
    <<obj.attacks_1[1] << endl
    <<obj.attacks_1[2] << endl
    <<obj.attacks_1[3] << endl;
    
    
    return out;
}

attacks :: ~attacks(){
    delete x;
}


