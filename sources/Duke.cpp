#include "Duke.hpp"
#include "Game.hpp"
#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Duke::Duke(Game const  & game,string const  & name){
        this->_game=game;
        this->_name =name;
        this->_coins=0;
    }
    void Duke::block(Player const  & name){
        ;
    }
    void Duke::coup(Player const  & name){
        ;
    }
    
    string Duke::role(){
        return "Duke";
    }

}



