#include <iostream>
#include "Board.h"
using namespace std;


int main()
{
	game::Board myGameBoard;
	myGameBoard.initalizeBoard();
	myGameBoard.printBoard();

	return 0;
}