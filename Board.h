//
//  Board.h
//
//
//  Created by Ari Cohen on 2/12/15.
//
//

#ifndef __BOARD_H__
#define __BOARD_H__

#include <vector>
#include <string>
#include "Move.h"
#include "Player.h"

class Board {
private:
    std::vector<std::vector<Player> > b;
    Player p1, p2;
    std::string get_val(Player p); //Is this player x's or y's?
public:
    //Setup board
    Board(Player player1, Player player2);
    //Get the value in square. EMPTY, PLAYER1 or PLAYER2
    Player get_square(int row, int col);
    //Returns true if space is empty, false otherwise
    bool check_move(Move m);
    //Assumes move is valid and places piece of player there
    void make_move(Move m);
    //Returns default player for still playing, null for tie, or the player who won
    Player status();
    //Display the board
    void display();
};

#endif