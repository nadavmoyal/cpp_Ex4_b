#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace std;

namespace coup{

class Captain : public Player {
private:
    int _coins;
    Game _game;
    string _name;
public:
    
    Captain(Game const  & game,string const  & name);
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    int coins(){return _coins;}
    static void block( Player const  & name);
    static void steal(Player const  & name);
    static void coup( Player const  & name);
    static string role();
};
}