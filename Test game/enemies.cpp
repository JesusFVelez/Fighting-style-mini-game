//
//  enemies.cpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#include "enemies.hpp"

enemies :: enemies():characterbase(){
}

enemies :: enemies ( const enemies & obj){
    (*this)= obj;
}
enemies :: enemies (string N,int H, int S, attack obj[]) : characterbase(N, H, S, obj){
}
enemies :: enemies (string N,int H, int S, attacks obj) : characterbase(N, H, S, obj){
    
    
}

enemies & enemies :: operator =(const enemies & obj){
    attacks :: operator=( obj.attacks4);
    this-> name= obj.name;
    this-> health = obj. health;
    this-> speed= obj.speed;
    this-> attacks4= obj.attacks4;
    return (*this);
}

ostream & operator <<(ostream & out, const enemies & obj){
    out <<"Enemy '" << obj.getname() << "' with " << obj.gethealth() << " hp has appeared !";
    return (out);
}

enemies & enemies :: operator=(const attack anatk[]){
    attacks:: operator = (anatk);
    
    this-> attacks4 = anatk;
    return(*this);
}

enemies & enemies :: operator=(const attacks atks){
    attacks :: operator= (atks);
    this->attacks4= atks;
    return (*this);
}
