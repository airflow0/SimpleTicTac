#include "Player.h"
#include "single_include/nlohmann/json.hpp"
#include <iostream>
#include <sys/stat.h>
using namespace player;
using json = nlohmann::json;


std::string Player::getName()
{
	return this->name;
}

void Player::save()
{
	//Check for existing file 
	// if exists then load
	//else create new file

}
inline bool exists(const std::string& file)
{
	struct stat buffer;
	return(stat(file.c_str(), &buffer) == 0);
}