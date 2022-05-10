#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <string.h>
#include "Game.hpp"
#pragma once


using namespace std;

namespace coup
{
class Player {
private:
    string _name;
    int _coins;
    string _role;
public:
    Player();
    Player(string name,int coins,string role);
    ~Player();
    string getName(){return _name;}
    void setName(string name){this->_name=name;}
    string getName(Player p){return p._name;}
    int coins(){return _coins;}
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;} // need to add an option of block
    static void coup( Player const  &  name);
    string role(){return _role;};
    


};

};