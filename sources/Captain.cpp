#include "Captain.hpp"

#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Captain::Captain(Game & game,string const  & name) : Player (game,name)
    {
        ;
    }
    void Captain::block(Player const  & name){
        throw("cant block");
    }
    
    void Captain::steal(Player & name){
        this->CheckTurn();
        if(name._coins<2){
           name._coins-=1;
           this->_coins+=1; 
        }
        else{
           name._coins-=2;
           this->_coins+=2; 
        }
        this->previous="steal";
        this->_game->CalculateTurn();
        
    }
    string Captain::role(){
        return "Captain";
    }
    

}




