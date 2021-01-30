#include "Board.h"
#include <iostream>

using namespace b;



void Board::initalizeBoard()
{
	for (int i = 0; i < 9; i++)
	{
		board[i] = -1;
	}
	this->boardSize = sizeof(board) / sizeof(*board);
}
void Board::update(int loc, int value)
{
	if (loc < 9)
	{
		board[loc] = value;
	}
	else
	{
		//LOC error
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

NOTE::None nested printing? For better performance? Figure out testing method for program execution based on nested for loop vs. Single while loop
*/
void Board::printBoard()
{
	int temp = 1;
	while (temp < boardSize+1)
	{
		if (temp % 3 == 0)
		{
			std::cout << board[temp - 1] << " ";
			std::cout << std::endl;
		}
		else
		{
			std::cout << board[temp - 1] << " ";
		}
		temp++;
	}
}



