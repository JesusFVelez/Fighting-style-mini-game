//
//  enemies.hpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#ifndef enemies_hpp
#define enemies_hpp

#include <stdio.h>
#include "character basics.hpp"
using namespace std;
class enemies: public characterbase{
private:
    
public:
    enemies();
    enemies(const enemies & obj);
    enemies(string ,int, int, attack[] );
    enemies(string ,int, int, attacks );
    enemies & operator = (const enemies & obj);
    friend ostream & operator <<( ostream &out, const enemies & obj);
    enemies & operator=(const attack anatk[4]);
    enemies & operator=(const attacks  atks);
};

#endif /* enemies_hpp */



