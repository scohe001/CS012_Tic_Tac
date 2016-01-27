//
//  Move.h
//
//
//  Created by Ari Cohen on 2/12/15.
//
//

#ifndef __MOVE_H__
#define __MOVE_H__

#include "Player.h"

class Move {
private:
    int row, col;
    Player p;
public:
    Move();
    Move(int row, int col, Player p);
    Move(const Move&);
    int get_row();
    int get_col();
    Player get_player();
};

#endif