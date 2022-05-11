
#include "Player.hpp"
#include "Game.hpp"
#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    
    Player:: Player (Game & game,string const  & name) {
        const int maxP=6;
        this->_game=&game;
        this->_name=name;
        if (this->_game->gameStarted)
        {
            throw runtime_error("cant join - the game has already started");
        }
        int numPlayers=this->_game->_Players.size();
        if (numPlayers >= maxP)
        {
            throw std::logic_error("game is full");
        }
        this->_coins=0;
        this->_game->_Players.push_back(name);
        this->isdead=false;
        this->_game->insertPlayer(this);
        this->previous="game start";
        killed=NULL;
      
    }


    Player::~Player(){
        ;
    }


    void Player::coup(Player & name){
        const int CoupCost=7;
        if(this->_coins <CoupCost){
            throw("There is not enough money to 'coup'");
        }
        if(name.isdead){
            throw(name._name +"is already not in the game");
        }
        name.isdead=true;
        _coins-=CoupCost;
        this->_game->NumOfPlayers--;
        name.previous="coup";
        this->_game->CalculateTurn();
    }

    void Player::income()
    {
        const int highCoins=10;
        CheckTurn();
        if(this->_coins>=highCoins){
            throw("you must doing coup now");
        }
        this->_coins++;
        this->_game->CalculateTurn();
    }
    void Player::foreign_aid(){
        const int highCoins=10;
        CheckTurn();
        if(this->_coins>=highCoins){
            throw("you must doing coup now");
        }
        this->_coins+=2;
        this->previous="foreign_aid";
        this->_game->CalculateTurn();
    }
    void Player:: CheckTurn() const{
        int BoolTurn = this->_name.compare(this->_game->turn());
        if(BoolTurn!=0){
            throw("Wrong action, it's "+this->_game->turn()+ "'s turn");
        }
    }  
    void Player:: backToLife(Player & name) const{
        name.killed->isdead=false;
        this->_game->NumOfPlayers++;
    }
    

    
}




