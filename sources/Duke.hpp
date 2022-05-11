#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string.h>
using namespace std;
namespace coup{

class Duke : public Player {
private:
public:
    // void income(){_coins++;}
    // void foreign_aid(){_coins+=2;}
    void tax();
    // int coins(){return _coins;}
    static void block(Player & name);
    Duke(Game & game,string const  & name);
    static string role();
    };
};