#pragma once
#ifndef FILE_SYSTEM_H
#define FILE_SYSTEM_H

#include <iostream>

namespace file
{
	class FileSystem
	{
	private:
	public:
		FileSystem() {}
		virtual ~FileSystem() {}
		bool exists(const std::string fileloc);
		
	};
	
}


#endif
