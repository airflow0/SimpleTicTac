#include <iostream>
#include "Board.h"
#include "Player.h"
using namespace std;



void testGameBoard()
{
	b::Board myGameBoard;
	while (true)
	{
		myGameBoard.printBoard();
		char gamestatus;
		int loc, value;
		cin >> gamestatus;
		if (gamestatus == '1')
		{
			cout << "Enter Location" << endl;
			cin >> loc;
			cout << "Enter Value" << endl;
			cin >> value;
			myGameBoard.update(loc, value);
		}
		if (gamestatus == 'f')
			break;
	}
}
void testPlayer()
{

}
int main()
{
	
	return 0;
}