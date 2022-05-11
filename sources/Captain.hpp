#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace std;

namespace coup{

class Captain : public Player {
private:
public:
    Captain(Game & game,string const  & name);
    // void income(){_coins++;}
    // void foreign_aid(){_coins+=2;}
    // int coins(){return _coins;}
    static void block( Player const  & name);
    void steal(Player & name);
    static string role();
};
}