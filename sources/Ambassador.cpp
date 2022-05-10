#include "Ambassador.hpp"

#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Ambassador::Ambassador(Game const & game,string const  &name){
        this->_game=game;
        this->_name =name;
        this->_coins=0;
    }
    
    void Ambassador::coup(Player const  & name){;}
    void Ambassador::transfer(Player const  & p1,Player const  & p2){;}
    void Ambassador::block(Player const  & name){
        ;
    }
    string Ambassador::role(){
        return "Ambassador";
    }
}


