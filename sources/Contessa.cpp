#include "Contessa.hpp"
#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Contessa::Contessa(Game const  & game,string const  & name){
        this->_game=game;
        this->_name =name;
        this->_coins=0;
    }
    void Contessa::block(Player const  &name){
        ;
    }
    void Contessa::coup(Player const  & name){
        ;
    }
    string Contessa::role(){
        return "Contessa";
    }

}

