#include "Assassin.hpp"

#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Assassin::Assassin(Game const  &game,string const  & name){
        this->_game=game;
        this->_name =name;
        this->_coins=0;
    }

    void Assassin::coup(Player const  & name){
        ;
        }
    string Assassin::role(){
        return "Assassin";
    }

}



