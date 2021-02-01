#include <iostream>
#include "Board.h"
#include "Player.h"
#include "PlayerFileSystem.h"

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
void testFileSystem()
{
	file::PlayerFileSystem* fs = new file::PlayerFileSystem();
	


}
int main()
{
	testFileSystem();
	return 0;
}