//Isabel A. Lammens
//Coding exercice 1
//Github user: ilammens

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"

int main() 
{
	
	int i = 0;
	char key;
	house *room = (house*)malloc((sizeof(house)) * 5); //saves memory

	if (room == 0) 
	{
		printf("Error\n");
		exit(0);
	}
	
	map(room);

	printf("You're in a house. Move around with (n/s/e/w) and press (q) to quit :(\n");
	
	
	do
	{
		printf("Choose a direction: ");
		fflush(stdin); //clear
		scanf_s("%c", &key);

		switch (key)
		{
		case 'n':
			printf("\n%s\n", ((room + i)->north)); //the string written in the map function gets copied here, depending on the i
			i = ((room + i)->to_north); //new i gets assigned
			break;

		case 's':
			printf("\n%s\n", ((room + i)->south)); //repeat previous case changing directions
			i = ((room + i)->to_south);
			break;

		case 'e':
			printf("\n%s\n", ((room + i)->east));
			i = ((room + i)->to_east);
			break;

		case 'w':
			printf("\n%s\n", ((room + i)->west));
			i = ((room + i)->to_west);
			break;

		default:
			printf("\nHey! Please use one of the keys I mentioned! :,( \n");
			break;
		}
		
	} while (key != 'q');

	system("pause");
	return 0;
}

