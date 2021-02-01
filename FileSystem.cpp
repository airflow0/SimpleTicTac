#include <iostream>
#include "FileSystem.h"
#include "single_include/nlohmann/json.hpp"

using namespace file;

bool FileSystem::exists(const std::string fileloc)
{
	struct stat buffer;
	return(stat(fileloc.c_str(), &buffer) == 0);
}

