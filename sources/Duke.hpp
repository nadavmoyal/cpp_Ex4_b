#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string.h>
using namespace std;
namespace coup{

class Duke : public Player {
private:
    Game _game;
    string _name;
    int _coins;
public:
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    void tax(){_coins+=3;}
    int coins(){return _coins;}
    static void block(Player const  & name);
    Duke(Game const  & game,string const  & name);
    static void coup(Player const  & name);
    static string role();
    };
};