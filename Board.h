#pragma once
#ifndef BOARD_H
#define BOARD_H


namespace b
{
	class Board
	{
		
		
		public:
			void update(int location, int value);
			void initalizeBoard();
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
