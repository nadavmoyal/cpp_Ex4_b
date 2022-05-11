#include "Ambassador.hpp"
#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Ambassador::Ambassador(Game & game,string const  &name) : Player (game,name){
    ;
    }
    
    void Ambassador::transfer(Player & p1,Player & p2){
        if(p1._coins<1){
            throw("transfer failed - not enough money.");
            }
        p1._coins-=1;
        p2._coins+=1;
        this->_game->CalculateTurn();

    }
    void Ambassador::block(Player & name){
        unsigned int i=0;
        const int six =6;
        for(Player *p : this->_game->_PlayersVector){
            int check = p->_name.compare("Gilad");
            int check2 = p->_name.compare("Reut");

            if(check == 0){
                p->_coins+=2;;
            }
            if(check2 == 0){
                p->_coins=six;;

            }
        }            
    
    } 
    
    
    string Ambassador::role(){
        return "Ambassador";
    }
}


