#include <iostream>

using namespace std;
/*
0|1|2
3|4|5
6|7|8

3x3 matrix
*/

//initalize the board; 
int board[9] =
{
	-1,-1,-1,
	-1,-1,-1,
	-1,-1,-1
};

int getBoardSize() {
	return sizeof(board) / sizeof(*board);
}
void printBoard()
{
	for (int i = 0; i < getBoardSize(); i++) {
		cout << board[i] << endl;
	}
}


int main()
{
	
	printBoard();

	/*while (true)
	{
		printBoard();
		char input;
		cout << "Press F to end game" << endl;
		cin >> input;
		if (input == 'f')
		{
			break;
		}

	}
	return 0;*/
}