#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0, count = 0;
	int tries;
	int i, j, n, m;

	char map[10][10] =
	{
		{ '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', },
		{ '-', 'A', 'C', '-', '-', '-', '-', '-', '-', '-', },
		{ '-', '-', 'C', '-', '-', '-', '-', '-', '-', '-', },
		{ '-', '-', 'C', '-', '-', '-', '-', '-', '-', '-', },
		{ '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', },
		{ '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', },
		{ '-', '-', '-', '-', '-', 'D', 'D', 'D', 'D', '-', },
		{ 'B', 'B', '-', '-', '-', '-', '-', '-', '-', '-', },
		{ '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', },
		{ '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', },
	};

	printf("--------BATTLESHIP--------\n\n");
	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			printf("*\t");
		}
		printf("\n");
	}


	do
	{
		printf("Enter the x position of your bomb: ");
		scanf_s("%i", &i);
		printf("Enter the y position of your bomb: ");
		scanf_s("%i", &j);

		if (map[i][j] == '-')
		{
			printf("Miss!\n");
			tries++;
		}

		else if (map[i][j] == 'A')
		{
			printf("Hit! You sank the boat 'A'\n!");
			tries++;
			a++;
		}

		else if (map[i][j] == 'B')
		{
			printf("Hit!\n");
			tries++;
			b++;

			if (b == 2)
			{
				printf("You sank boat 'B'!\n");
			}
		}

		else if (map[i][j] == 'C')
		{
			printf("Hit!\n");
			tries++;
			c++;

			if (c == 3)
			{
				printf("You sank boat 'C'!\n");
			}
		}
		
		else if (map[i][j] == 'D')
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