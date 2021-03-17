//
//  main.cpp
//  Test game
//
//  Created by Jesus Velez on 11/6/18.
//  Copyright © 2018 Jesus Velez. All rights reserved.
//

#include <iostream>
#include "enemies.hpp"
#include "Hero.hpp"
#include <ctime>
using namespace std;
void fight(hero *, enemies*);
void enemytohero(hero * , enemies*);
void herotoenemy(hero*, enemies* );
int main() {
    
    
    //Cat aCat;
    //Dog aDog;
    //CatDog aCatDog;
    //Mammals mamalList[3] = {aCat, aDog, aCatDog};
    
    attack obj[16];
    attacks attackes= {obj[0]={"Punch",50, "Poison", 5, "5hp/turn"}, obj[1]= { "Flame thrower", 70, "burn", 5, "5hp/turn"}, obj[2] = { "Tomahawk", 30 },obj[3]= {"Corrosive kick", 50, "Corrosion",8, "8hp/turn"}};
    
    attacks attackes_1 = {obj[4]={"Agarra Teta",100,"Menstrual Pains",30,"10hp/turn"}, obj[5]={"Escupe pueLco", 150, "Acid",10,"10hp/turn"}, obj[6]={"Perreo intenso",600,"Muerte Instantanea", 10000, "Perreo tan intenso que mata de una"},obj[7]={"Borrador",599, "No existes ya", 10000, "Te borra de la vida"}};
        
    attacks attackesmielda= {obj[8]={"Mielda",20,"Cagaera", 10,"10hp/turn"},obj[9]={"Mielda 2", 40, "Mas Cagaera", 15, "15 por donde no pasara el sol"}, obj[10]={"Mielda 3",60, "Triple la cagaera", 20 ,"20 por donde no pasara el sol y la luna" }, obj[11]={"Mielda 4", 80, "cuatruple la cagaera",25,"25 por donde no pasara el sol, la luna y el planeta marte"}};
    
    attacks attackesarturo= {obj[12]={"Espadazo",40,}, obj[13]={"Cavalgada de la madrugada", 70}, obj[14]={"Reunion de la mesa Redonda",80,"Borrachera",20,"Borrachera tan intensa que te caes y te quita 80hp"}, obj[15]={"Pata de caballo", 40, "Mareo", 10, "10hp/turn"}};
    
    
    hero Henry( "Henry" , 150, 7, attackes);
    hero Arturo( "Arthur" , 200, 4, attackesarturo);
    hero Elizabeta( "Elizabeth" , 300, 5, attackes_1);
    hero Katty( "Kate" , 100, 2, attackesmielda);
    enemies alterego("BratZ", 200 ,4, attackes);
    
    
    cout << "Choose your fighter by selecting the number of the fighter and press enter:"<<endl;
    int herodecision;
    hero myHero;
    cout
    <<"1) " << Henry <<endl << endl
    <<"2) " << Arturo <<endl << endl
    <<"3) " << Elizabeta <<endl << endl
    <<"4) " << Katty     <<endl << endl;
    cin >> herodecision;
    switch(herodecision){
        case 1:
            myHero = Henry;
            cout <<"You chose " << myHero.getname()<< "! \n";
            break;
        case 2:
            myHero = Arturo;
            cout <<"You chose " << myHero.getname()<< "! \n";
            break;
        case 3:
            myHero = Elizabeta;
            cout <<"You chose " << myHero.getname()<< "! \n";
            break;
        case 4:
            myHero = Katty;
            cout <<"You chose " << myHero.getname()<< "! \n";
            break;
    }
    
    
    fight(&myHero, &alterego);
    
    
    
    
    
    
    
    
    
    return 0;
};







void fight(hero *ahero , enemies* aenemy){
    cout << *aenemy << endl << endl;
    do{
        bool temp= ahero->comparespeeds(ahero->getspeed(), aenemy->getspeed());
        if (temp==true){
            herotoenemy(ahero, aenemy);
            cout <<  endl;
            enemytohero(ahero, aenemy);
            cout << endl;
        }
        else{
            enemytohero(ahero, aenemy);
            cout << endl;
            herotoenemy(ahero, aenemy);
            cout << endl;
        }
        
}while((ahero->gethealth()>0) &&
       (aenemy->gethealth()>0));
    
if (ahero->gethealth() < 1 && aenemy->gethealth() > 0){
    cout << " You have reached 0hp ... \n"
    << "You loose...  you have to start again :) \n";
    }
    else if( aenemy->gethealth() < 1 && ahero->gethealth() > 0 ){
    cout <<" You win! \n";
    };
    
    
};



void herotoenemy(hero *aHero, enemies * aEnemy){
    int decision=0;
    do{
        cout << *aHero << endl
        << "Choose your attack by pressing the number of the attack... \n \n";
        cin >> decision;
        switch(decision){
            case 1:
        cout <<"You chose " <<aHero->getattack_name(0);
        aEnemy->healthdamage(aHero->getattackdmg(0));
        cout << endl;
                if (aEnemy-> gethealth() > 0){
                    
                    aEnemy->healthdmgwitheffect(aHero->geteffect_dpt(0));
                    cout << "Enemy '"
                    << aEnemy->getname() << "' now has  " << aHero->geteffect_name(0) << " which does " << aHero->geteffect_description(0)<< endl;
                    cout <<"'" << aEnemy->getname() << "' now has "
                    << aEnemy-> gethealth() <<" hp"
                    <<endl;

                }
                else{
                    cout << "'" <<aEnemy->getname() <<"' has reached 0 hp" << endl;
                }
                break;
            case 2:
    cout <<"You chose " << aHero->getattack_name(1);
        aEnemy->healthdamage(aHero->getattackdmg(1));
        cout<< endl;
                if (aEnemy-> gethealth() > 0){
                    aEnemy->healthdmgwitheffect(aHero->geteffect_dpt(1));
                    cout << "Enemy '"
                    << aEnemy->getname() << "' now has  " << aHero->geteffect_name(1) << " which does " << aHero->geteffect_description(1)<< endl;
                    cout <<"'" << aEnemy->getname() << "' now has "
                    << aEnemy-> gethealth() <<" hp"
                    <<endl;

                }
                else{
                    cout << "'" <<aEnemy->getname() <<"' has reached 0 hp" << endl;
                }
                break;
            case 3:
    cout <<"You chose " << aHero->getattack_name(2);
        aEnemy->healthdamage(aHero->getattackdmg(2));
        cout << endl;
                if (aEnemy-> gethealth() > 0){
                    aEnemy->healthdmgwitheffect(aHero->geteffect_dpt(2));
                    cout << "Enemy '"
                    << aEnemy->getname() << "' now has  " << aHero->geteffect_name(2) << " which does " << aHero->geteffect_description(2)<< endl;
                    cout <<"'" << aEnemy->getname() << "' now has "
                    << aEnemy-> gethealth() <<" hp"
                    <<endl;

                }
                else{
                    cout << "'" <<aEnemy->getname() <<"' has reached 0 hp" << endl;
                }
                break;
            case 4:
    cout <<"You chose " << aHero->getattack_name(3);
        aEnemy->healthdamage(aHero->getattackdmg(3));
        cout << endl;
        if (aEnemy-> gethealth() > 0){
            aEnemy->healthdmgwitheffect(aHero->geteffect_dpt(3));
            cout << "Enemy '"
            << aEnemy->getname() << "' now has " << aHero->geteffect_name(3) << " which does " << aHero->geteffect_description(3)<< endl;
            cout <<"'" << aEnemy->getname() << "' now has "
            << aEnemy-> gethealth() <<" hp"
            <<endl;

        }
        else{
            cout << "'" <<aEnemy->getname() <<"' has reached 0 hp" << endl;
        }
                  break;
                
            default:
        cout <<"Incorrect input try again"<<endl;
        }
        
    }while (decision < 0 && decision > 4 );
};





void  enemytohero(hero * ahero, enemies *anenemy){
    
    srand(int(time (0)));
    int x= int(1+(rand()%4));
    
    switch(x){
        case 1:
    ahero -> healthdamage(anenemy->getattackdmg(0));
cout << anenemy->getname() << " used " <<anenemy->getattack_name(0) << " ! "
        << endl << endl;
    ahero->healthdmgwitheffect(anenemy->geteffect_dpt(0));
    cout << "Hero '"
    << ahero->getname() << "' now has " << anenemy->geteffect_name(0) << " which does " << anenemy->geteffect_description(0)<< endl;
            break;
        case 2:
    ahero -> healthdamage(anenemy->getattackdmg(1));
    cout << anenemy->getname() << " used " <<anenemy->getattack_name(1) << " ! "
            <<endl << endl;
        ahero->healthdmgwitheffect(anenemy->geteffect_dpt(1));
        cout << "Hero '"
        << ahero->getname() << "' now has " << anenemy->geteffect_name(1) << " which does " << anenemy->geteffect_description(1)<< endl;
            
            break;
        case 3:
    ahero -> healthdamage(anenemy->getattackdmg(2));
    cout << anenemy->getname() << " used " <<anenemy->getattack_name(2) << " ! "
            <<endl << endl;
    ahero->healthdmgwitheffect(anenemy->geteffect_dpt(2));
    cout << "Hero '"
    << ahero->getname() << "' now has " << anenemy->geteffect_name(2) << " which does " << anenemy->geteffect_description(2)<< endl;
            break;
        case 4:
    ahero -> healthdamage(anenemy->getattackdmg(3));
    cout << anenemy->getname() << " used " <<anenemy->getattack_name(3) << " ! "
            << endl << endl;
            ahero->healthdmgwitheffect(anenemy->geteffect_dpt(3));
            cout << "Hero '"
            << ahero->getname() << "' now has " << anenemy->geteffect_name(3) << " which does " << anenemy->geteffect_description(3)<< endl;
            break;
        default:
    cout <<" There has been an error in the program please contact the creator ( Jesus (c))";
    }
    };
