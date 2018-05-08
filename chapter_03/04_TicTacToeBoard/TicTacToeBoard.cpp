#include <iostream>

int main()
{
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = { {'0', 'X', '0'},
								  {' ', 'X', 'X'},
								  {'X', '0', '0'} };
	std::cout << "Here's the tic - tac - toe board:\n";
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "\n'X' moves to the empty location.\n\n";
	board[1][0] = 'X';
	std::cout << "Now the tic - tac - toe board is:\n";
	
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "\n'X' wins!";
}
