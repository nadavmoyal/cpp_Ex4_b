#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace std;

namespace coup{
class Assassin : public Player {
private:
public:
    Assassin(Game & game,string const  & name);
    // void income(){_coins++;}
    // void foreign_aid(){_coins+=2;}
    // int coins(){return _coins;}
    void coup(Player &p);
    static string role();
    void backToLife();
    };

    
    };