
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;
namespace coup{

class Contessa : public Player {
private:
public:
    Contessa(Game & game,string const  & name);
    // void income(){_coins++;}
    // void foreign_aid(){_coins+=2;}
    int coins(){return _coins;}   
    static void block(Player & name);
    static string role();

};

};