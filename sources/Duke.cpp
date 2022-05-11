#include "Duke.hpp"
#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Duke::Duke(Game & game,string const  & name) : Player (game,name){
        ;
    }
    void Duke::block(Player & name){
        int isBlocked = name.previous.compare("foreign_aid");
        if(isBlocked==0){
           name._coins-=2;
        }
        else{
            throw("The blocking action is invalid.");
        } 
    }
    
    void Duke::tax(){
        const int highCoins=10;
        CheckTurn();
        if(this->_coins>=highCoins){
            throw("you must doing coup now");
        }
        this->_coins+=3;
        this->_game->CalculateTurn();
    }
    
    string Duke::role(){
        return "Duke";
    }

}



