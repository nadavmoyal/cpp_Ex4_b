
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;
namespace coup{

class Contessa : public Player {
private:
    Game _game;
    int _coins;
    string _name;

public:
    Contessa(Game const  & game,string const  & name);
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    int coins(){return _coins;}   
    static void coup(Player const  & name);
    static void block(Player const  & name);
    static string role();

};

};