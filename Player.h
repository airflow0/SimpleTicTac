#include <string>
#pragma once
#ifndef PLAYER_H
#define PLAYER_H


namespace player
{
	
	class Player
	{
	public:
		std::string getName();
		void setName();
		void save();
		void increaseWins();
		void increaseLose();
		void increaseMoves();
		void load();
		
		Player(std::string name)
		{
			this->name = name;
			
		}


	private:
		std::string name;
		int wins, lose, moves;

	};
}



#endif