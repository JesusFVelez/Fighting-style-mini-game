//
//  Hero.cpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#include "Hero.hpp"


hero :: hero():characterbase(){
}

hero :: hero ( const hero & obj){
    (*this)= obj;
}

hero :: hero(string N,int H, int S, attack AT[] ) : characterbase(N, H, S, AT){
    
}

hero :: hero(string N,int H, int S, attacks ATKS ) : characterbase(N, H, S, ATKS){
    
}

hero :: hero(string N,int H, int S ) : characterbase(N, H, S){
    
}
    

hero & hero :: operator =(const hero & obj){
    attacks:: operator=(obj.attacks4);
    this-> name= obj.name;
    this-> health = obj.health;
    this-> speed= obj.speed;
    this-> attacks4 = obj.attacks4;
    return (*this);
}
ostream & operator <<(ostream & out, const hero & obj){
    
    out <<"Hero '"
    << obj.getname()
    << "' (" << obj.gethealth()
    << "hp) has 4 attacks: \n"
    
    
    <<" 1: "
    <<obj.getattack(0)
    <<endl
    
    
    <<" 2: "
    << obj.getattack(1)
    <<endl
    
    <<" 3: "
    << obj.getattack(2)
    <<endl
    
    <<" 4: "
    << obj.getattack(3)
    <<endl;

    return (out);
}

hero & hero ::  operator = (const attack anatk[]){
    attacks :: operator=(anatk);
    this-> attacks4= (anatk);
    return(*this);
}

hero & hero :: operator = (const attack & anatk){
    attack :: operator=(anatk);
    this-> attacks_1 [0]= (anatk);
    return(*this);
}




hero & hero :: operator=(const attacks & atks){
    attacks :: operator= (atks);
    this->attacks4 = (atks);
    return (*this);
}
