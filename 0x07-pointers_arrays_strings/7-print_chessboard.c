#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @board: The chessboard to print.
 * Description: This function prints the contents of the chessboard, which is
 * represented as a 2D array of characters.
 */
void print_chessboard(char (*board)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(board[row][col]);
		}
		_putchar('\n');
	}
}

