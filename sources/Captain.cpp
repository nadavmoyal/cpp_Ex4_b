#include "Captain.hpp"

#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Captain::Captain(Game const  & game,string const  & name){
        this->_game=game;
        this->_name =name;
        this->_coins=0;
    }
    void Captain::block(Player const  & name){;}
    void Captain::steal(Player const  & name){;}
    void Captain::coup(Player const  & name){;}
    string Captain::role(){
        return "Captain";
    }
    

}




