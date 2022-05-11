#include "Game.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    
    //Displays the name of the player whose turn it is now
    string Game::turn()   
        {
        if(this->_PlayersVector.empty()){
            throw("There is no players in the game..");
        }
        Player *p = this->_PlayersVector.at((unsigned int) (this->turnCounter));
        return p->_name;
        // return this->_Players.at((unsigned int) (this->turnCounter));
        }

    string Game::winner() const{
        if(end){
            return this->Winner;
        }
        throw ("the game not over");
    }
  

    //Calculate Who's turn it is now.
    void Game::CalculateTurn(){
        const int MaxP=7;
        const int MinP=1;       
            if(turnCounter==MaxP){
                throw("Invalid number of players..");
            }
        int size = this->players().size();
    
        if(size>=MaxP){
                throw("Invalid number of players..");
        }
        if(size==MinP){
            if(this->_PlayersVector.size()!=1){
            end=true;
            }
            else{
                throw("min - Invalid number of players..");

            }
        }
            this->turnCounter = ((this->turnCounter+1)) % this->_Players.size();
            while(this->_PlayersVector.at(turnCounter)->isdead){
                this->turnCounter = ((this->turnCounter+1)) % this->_Players.size();
            }
        gameStarted=true;
            

        }
        
    vector<string> Game::players(){
            vector<string> temp;
            for ( Player *p : _PlayersVector) {
                if(!p->isdead){
                    temp.push_back(p->_name);      
                }
            }
            if((temp.size()==1) && (_PlayersVector.size()>1)){
                end=true;
                this->Winner=temp[0];
            }
            return temp;
        }
    void Game::insertPlayer(Player *p){
        this->NumOfPlayers++;
        this->_PlayersVector.push_back(p);
    }

    Game::Game(){
    turnCounter=0;
    NumOfPlayers=0;
    end=false;
    gameStarted=false;
    }
    
    Game::~Game(){
        ;
    }
        

}





