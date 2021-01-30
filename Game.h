#pragma once
#ifndef GAME_H
#define GAME_H

namespace game
{
	class Game
	{
	public:
		void setStatus();
		bool checkStatus();
	private:
		bool status;
		short turn; 

	};
}

#endif