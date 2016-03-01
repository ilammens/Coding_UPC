#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void create_ships(int** hidden_map, int lenght, int orientation, int xcoor, int ycoor, int n)
{
	int x, y;
	int ship_a, ship_b, ship_c, ship_d;
	
	xcoor = rand() % n;
	ycoor = rand() % n;
	orientation = rand() % 2

	enum ships {a = 1, b, c, d};

	do
	{
		if (orientation = 0) //horizontal
		{
			for (x = 0; x < a; x++)
			{
				ship_a = xcoor + x; //
				(*(*(hidden_map + x))) = 'A';
			} 

			for (x = 0; x < b; x++)
			{
				ship_b = xcoor + x;
				(*(*(hidden_map + x))) = 'B';
			} 

			for (x = 0; x < c; x++)
			{
				ship_c = xcoor + x;
				(*(*(hidden_map + x))) = 'C';
			} 

			for (x = 0; x < c; x++)
			{
				ship_d = xcoor + x;
				(*(*(hidden_map + x))) = 'D';
			} 
		}

		else 


	} while (xcoor > n || ycoor > n)
}
