#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;

namespace coup{
class Ambassador : public Player {
private:
    int _coins;
    Game _game;
    string _name;
public:
    Ambassador(Game const  & game,string const  & name);
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    int coins(){return _coins;}
    static void coup(Player const & name);
    static void transfer(Player const & p1,Player const  & p2);  
    static void block(Player const & name);
    static string role();
};

};