#pragma once
#include "Game.hpp"
#include <string>
using namespace std;
namespace coup{
    class Game;
    class Player
    {   
public:
    Game *_game;
    string _name;
    int _coins;
    string _role;
    bool isdead;
    string previous;
    Player *killed;
    Player(Game  & game,string const  & name);
    // Player(string name,int coins,string role);
    ~Player();
    string getName(){return _name;}
    void setName(string name){this->_name=name;}
    string getName(Player p){return p._name;}
    int coins(){return _coins;}
    void coup( Player &  name);
    string role(){return _role;};
    void foreign_aid();
    void income();
    void CheckTurn() const ;
    void backToLife(Player & name) const;
    


};

};