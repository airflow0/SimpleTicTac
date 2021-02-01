#include "Player.h"
#include <iostream>
#include "PlayerFileSystem.h"

using namespace player;



std::string Player::getName()
{
	return this->name;
}

void Player::save()
{
	//Check for existing file 
	// if exists then check nodes for difference overwrite
	// else create new file and nodes. fill points
	

}
