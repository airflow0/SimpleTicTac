#include "PlayerFileSystem.h"
#include <iostream>
#include <fstream>

using namespace file;

bool PlayerFileSystem::createPlayerFile(std::string filename) 
{
	std::string fileloc = "Data/Players/" + filename + ".json";
	if (FileSystem::exists(fileloc))
	{
		return false;
	}
	else
	{
		std::ofstream outputfile(fileloc);
		return true;
	}
	
}
