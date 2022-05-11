#include "Assassin.hpp"

#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Assassin::Assassin(Game &game,string const  & name) : Player (game,name){
        // this->killed=NULL;
    }

        void Assassin::coup(Player &p){
        CheckTurn();
        const int CoupCost = 7;
        const int CoupCost2 = 3;
        if(p.isdead){
            throw(p._name +"is already not in the game");
        }
        if (this->_coins < CoupCost2)
        {
            throw("There is not enough money to 'coup'");
        }
        this->previous="coup";
        if (this->_coins >= CoupCost)
        {
            this->_coins-=4;
            this->previous="coup_without_block";
        }
       
        p.isdead = true;
        this->_coins-=3;
        this->killed=&p;
        this->_game->CalculateTurn();
    }
    string Assassin::role(){
        return "Assassin";
    }
 


}



