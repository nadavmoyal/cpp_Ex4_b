#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <string.h>
#pragma once

using namespace std;

namespace coup
{
class Game {

private:
  	vector<std::string> _Players; 
    int NumOfPlayers;
    int turnCounter;
public:
    string winner(){return "nadav";}
    string turn(){return "your turn";}
    int getNumOfPlayers(){return NumOfPlayers;}
    Game(){};
    ~Game(){};
    vector<std::string> players(){ return _Players;}
    // string getTurn() const{return _Players[(unsigned int)(turnCounter)];}
    // string turn(){return _Players[(unsigned int)(turnCounter)];}
    // static std::vector<coup::Player> getPlayers(){return players;}
    // std::vector<std::string> operator=(std::vector<coup::Player> p2);
    // std::vector<std::string> players();
    // Game(int NumOfPlayers,vector<coup::Player> players) {this->NumOfPlayers=NumOfPlayers,this->players=players;}
    // Game(std::vector<coup::Player> playe){return Game(players.size(),players);}
};

};