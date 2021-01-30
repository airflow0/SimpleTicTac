#pragma once
#ifndef BOARD_H
#define BOARD_H


namespace game
{
	class Board
	{
		
		
		public:
			void update();
			void initalizeBoard();
			void headerTest();
			void printBoard();
			int getBoardSize();
			Board()
			{
				this->initalizeBoard();
			}
		private:
			int board[9];
			int boardSize;
	};
}

#endif // !BOARD_H
