
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include "doctest.h"

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

Game game{};

Duke duke{game, "Moshe"};
Assassin assassin{game, "Yossi"};
Ambassador ambassador{game, "Meirav"};
Captain captain{game, "Reut"};
Contessa contessa{game, "Gilad"};

TEST_CASE("winner & wrong turn")
{
    CHECK_THROWS(game.winner()); // the game is not over yet.
    CHECK_THROWS(assassin.foreign_aid());    // is duke turn now !
    CHECK_THROWS(assassin.income());  // is duke turn now !
    CHECK_THROWS(ambassador.foreign_aid());   // is duke turn now ! 
    CHECK_THROWS(ambassador.income());           // is duke turn now !
    CHECK_THROWS(captain.foreign_aid());          // is duke turn now !
    CHECK_THROWS(captain.income());          // is duke turn now !
    CHECK_THROWS(contessa.foreign_aid());          // is duke turn now !
    CHECK_THROWS(contessa.income());          // is duke turn now !
   
    CHECK_NOTHROW(duke.income());    // now it's right..
   
    CHECK_THROWS(duke.income());          // is assassin turn now !

    CHECK_NOTHROW(assassin.income());  // now it's right..

    CHECK_THROWS(assassin.foreign_aid());   // is ambassador turn now ! 
    
    CHECK_NOTHROW(ambassador.foreign_aid());   // now it's right..
}

/*

duke = 1 coin
assassin = 1 coin
ambassador = 2 coins
captain = 0 coin
contessa = 0 coin

this is the captain's turn now..
*/
TEST_CASE("coins check")
{
    CHECK(duke.coins()==1);
    CHECK(assassin.coins()==1);
    CHECK(ambassador.coins()==2);
    CHECK(captain.coins()==0);
    CHECK(contessa.coins()==0);

    CHECK_NOTHROW(captain.foreign_aid());   
    CHECK_NOTHROW(contessa.foreign_aid());
    CHECK_NOTHROW(duke.foreign_aid()); 
    CHECK_NOTHROW(assassin.foreign_aid());   
    CHECK_NOTHROW(ambassador.foreign_aid());   

 // after add 2 coins each player:
    CHECK(duke.coins()==3);
    CHECK(assassin.coins()==3);
    CHECK(ambassador.coins()==4);
    CHECK(captain.coins()==2);
    CHECK(contessa.coins()==2);

    CHECK_NOTHROW(captain.foreign_aid());   
    CHECK_NOTHROW(contessa.foreign_aid());
    CHECK_NOTHROW(duke.foreign_aid()); 
    CHECK_NOTHROW(assassin.foreign_aid());   
    CHECK_NOTHROW(ambassador.foreign_aid());   

 // after add 2 coins each player:

    CHECK(duke.coins()==5);
    CHECK(assassin.coins()==5);
    CHECK(ambassador.coins()==6);
    CHECK(captain.coins()==4);
    CHECK(contessa.coins()==4);

}

/*

duke = 5 coins
assassin = 5 coins
ambassador = 6 coins
captain = 4 coin
contessa = 4 coin

this is the captain's turn now..
*/
TEST_CASE("10 coins -> must doing coup && number of players && block")
{
    for(int i=0;i<2;i++){
    captain.foreign_aid();   
    contessa.foreign_aid();
    duke.tax(); 
    assassin.foreign_aid();   
    ambassador.foreign_aid();   
    }
    
    /*

    duke = 11 coins
    assassin = 9 coins
    ambassador = 10 coins
    captain = 8 coin
    contessa = 8 coin

    this is the captain's turn now..
    */

  CHECK_THROWS(duke.income());          // the duke must doing coup !
  CHECK_THROWS(duke.foreign_aid());      // the duke must doing coup !
  
  CHECK(game.getNumOfPlayers()==5);
  contessa.block(ambassador);
  duke.coup(ambassador);
  CHECK(game.getNumOfPlayers()==5);
  assassin.coup(ambassador);
  CHECK(game.getNumOfPlayers()==4);

}
