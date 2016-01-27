//
//  Player.h
//  
//
//  Created by Ari Cohen on 2/12/15.
//
//

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>

class Player {
private:
    std::string name;
public:
    Player(); //Make the null player for empty spaces
    Player(std::string name);
    std::string get_name();
    bool operator==(const Player&);
    bool operator!=(const Player&);
};

#endif
