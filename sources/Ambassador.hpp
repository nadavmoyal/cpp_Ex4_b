#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;

namespace coup{
class Ambassador : public Player {
private:
public:
    Ambassador(Game & game,string const  & name);
    // void income(){_coins++;}
    // void foreign_aid(){_coins+=2;}
    // int coins(){return _coins;
    void transfer(Player & p1,Player & p2);  
     void block(Player & name);
    static string role();
};

};