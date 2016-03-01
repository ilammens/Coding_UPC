//SUPER BATTLESHIP!
//Isabel Augusta Lammens

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcs.h"


int main()
{
	int a = 0, b = 0, c = 0, d = 0, count = 0; //ship counters
	int lenght, orientation, xcoor, ycoor;
	int tries;
	int i, j, n; //coords user inputs (i, j) and matrix size (n)
	int x, y;
	int** visible_map;
	int** hidden_map;

	srand(time(NULL));

	printf("Enter the size of your battle field (n x n): "); //only one value needed, matrix is square.
	scanf_s("%i", &n);
	
	if (n < 5)
	{
		printf("Please enter a matrix size greater than 4: "); //matrix under 4 x 4 creates bugs when setting ships up.
		scanf_s("%i", &n);
	}

	
	visible_map = (int**)malloc(n*sizeof(int));
	if (visible_map == NULL)
	{
		printf("Error allocating memory!");
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			(*(*(visible_map + x) + y)) = '*'; //Assign symbol to each pointer of the matrix (visible).
		}
	}


	hidden_map = (int**)malloc(n*sizeof(int));
	if (hidden_map == NULL)
	{
		printf("Error allocating memory!");
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			(*(*(hidden_map + x) + y)) = '-' //Assigns symbol to each pointer (coord) of the matrix (hidden, with the ships)
		}
	}

	create_ships(hidden_map, lenght, orientation, xcoor, ycoor, n);


	printf("--------BATTLESHIP--------\n\n");
	
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			printf("*\t");
		}

		printf("\n");
	}


	do //loop for shooting until you hit all of the ships
	{
		printf("Enter the x position of your bomb: ");
		scanf_s("%i", &i);
		printf("Enter the y position of your bomb: ");
		scanf_s("%i", &j);

		if (hidden_map[i][j] == '-')
		{
			printf("Miss!\n");
			tries++;
		}

		else if (hidden_map[i][j] == 'A')
		{
			printf("Hit! You sank the boat 'A'\n!");
			tries++;
			a++;
		}

		else if (hidden_map[i][j] == 'B')
		{
			printf("Hit!\n");
			tries++;
			b++;

			if (b == 2)
			{
				printf("You sank boat 'B'!\n");
			}
		}

		else if (hidden_map[i][j] == 'C')
		{
			printf("Hit!\n");
			tries++;
			c++;

			if (c == 3)
			{
				printf("You sank boat 'C'!\n");
			}
		}
		
		else if (hidden_map[i][j] == 'D')
		{
			printf("Hit!\n");
			tries++;
			d++;

			if (d == 4)
			{
				printf("You sank boat 'D'!\n");
			}
		}

		else
			;
		
	} while (a != 1 && b != 2 && c != 3 && d != 4);

	if (a != 1 && b != 2 && c != 3 && d != 4)
	{
		printf("You won! You took %i guesses before winning.", tries);
	}

	else
		;

	system("pause");
	return 0;
}