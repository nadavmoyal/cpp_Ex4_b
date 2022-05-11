#include "Contessa.hpp"
#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Contessa::Contessa(Game & game,string const  & name) : Player (game,name) {
    ;   
    }
    void Contessa::block(Player & name){
        int isBlocked = name.previous.compare("coup");
        if(isBlocked==0){
            name.backToLife(name);
        }
        else{
            throw("The blocking action is invalid.");
        } 
    }

    string Contessa::role(){
        return "Contessa";
    }

}

