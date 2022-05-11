#pragma once
#include "Player.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <string.h>

using namespace std;

namespace coup
{
class Player;
class Game {
protected:
   

private:

public:
    string Winner;
  	vector<string> _Players; 
    vector<Player*> _PlayersVector; 
    unsigned int turnCounter;
    int NumOfPlayers;
    bool end;
    bool gameStarted;
    string winner() const;
    string turn();
    void CalculateTurn();
    int getNumOfPlayers();
    Game();
    ~Game();
    vector<string> players();
    void insertPlayer(Player *p);
    // string getTurn() const{return _Players[(unsigned int)(turnCounter)];}
    // string turn(){return _Players[(unsigned int)(turnCounter)];}
    // static std::vector<coup::Player> getPlayers(){return players;}
    // std::vector<std::string> operator=(std::vector<coup::Player> p2);
    // std::vector<std::string> players();
    // Game(int NumOfPlayers,vector<coup::Player> players) {this->NumOfPlayers=NumOfPlayers,this->players=players;}
    // Game(std::vector<coup::Player> playe){return Game(players.size(),players);}
};

};