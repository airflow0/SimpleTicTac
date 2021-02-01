#pragma once
#ifndef PLAYER_FILE_SYSTEM_H
#define PLAYER_FILE_SYSTEM_H

#include "FileSystem.h"

namespace file
{
	class PlayerFileSystem : public FileSystem
	{
	private:
	public:
		PlayerFileSystem() {}
		~PlayerFileSystem() {}
		void save();
		void load();
		bool createPlayerFile(std::string filename);

	};
}

#endif
