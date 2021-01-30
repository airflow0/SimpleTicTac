#include "Board.h"
#include <iostream>

using namespace game;


void Board::headerTest()
{
	std::cout << "Test" << std::endl;
}
void Board::initalizeBoard()
{
	for (int i = 0; i < 9; i++)
	{
		board[i] = -1;
	}
	boardSize = sizeof(board) / sizeof(*board);
}
void Board::update()
{
	//check if board is intialized
	if (board == nullptr)
	{
		std::cout << "Board is not initalized" << std::endl;
		std::cout << "Initializing Board" << std::endl;
		initalizeBoard();
	}
	//Update board based on move
	else {

	}

}

int Board::getBoardSize()
{
	return boardSize;
}
/*
0|1|2|
3|4|5|		
6|7|8|
*/
void Board::printBoard()
{
	int temp = 1;
	while (temp < boardSize+1)
	{
		if (temp % 3 == 0)
		{
			std::cout << board[temp - 1];
			std::cout << std::endl;
		}
		else
		{
			std::cout << board[temp - 1];
		}
		temp++;
	}
}



