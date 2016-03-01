#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"


void map(house *room)
{
	int i;

	enum map{ dining_room = 0, kitchen, pantry, bedroom, bathroom };

	i = dining_room; //0
	/*copies the string (in red) to the struct, to then be printed in
	each case of the switch in the main func*/
	strcpy(((room + i)->north), "You went to the kitchen. There are doors to the south and east.");
	(room + i)->to_north = kitchen; //assigns the i of the room that's, in this casem north, of the room you're in
	strcpy(((room + i)->south), "You went to the bedroom. There's a door to the north.");
	(room + i)->to_south = bedroom;
	strcpy(((room + i)->east), "You went to the bathroom. The only exit is to the east.");
	(room + i)->to_east = bathroom;
	strcpy(((room + i)->west), "You bumped into a wall! Read again where the doors are <3");
	(room + i)->to_west = dining_room;


	i = kitchen; //1
	strcpy(((room + i)->north), "You bumped into a wall!");
	(room + i)->to_north = kitchen;
	strcpy(((room + i)->south), "You went to the dining room. There are doors to the north, south and east.");
	(room + i)->to_south = dining_room;
	strcpy(((room + i)->east), "You're in the pantry, are you hungry? (don't steal any food!) Exit to the west only. ");
	(room + i)->to_east = pantry;
	strcpy(((room + i)->west), "You bumped into a wall! Again...");
	(room + i)->to_west = kitchen;


	i = pantry; //2
	strcpy(((room + i)->north), "You bumped into a wall!");
	(room + i)->to_north = pantry;
	strcpy(((room + i)->south), "You bumped into a wall! I hope you're not hurt...");
	(room + i)->to_south = pantry;
	strcpy(((room + i)->east), "You bumped into a wall! Did it hurt?");
	(room + i)->to_east = pantry;
	strcpy(((room + i)->west), "You went to the kitchen. There are doors to the south and east.");
	(room + i)->to_west = kitchen;


	i = bedroom; //3
	strcpy(((room + i)->north), "You went to the dining room. There are doors to the north, south and east.");
	(room + i)->to_north = dining_room;
	strcpy(((room + i)->south), "You bumped into a wall! That's tough luck...");
	(room + i)->to_south = bedroom;
	strcpy(((room + i)->east), "You bumped into a wall!");
	(room + i)->to_east = bedroom;
	strcpy(((room + i)->west), "You bumped into a wall! Yelp!");
	(room + i)->to_west = bedroom;


	i = bathroom; //4
	strcpy(((room + i)->north), "You bumped into a wall!");
	(room + i)->to_north = bathroom;
	strcpy(((room + i)->south), "You bumped into a wall! Ouch.");
	(room + i)->to_south = bathroom;
	strcpy(((room + i)->east), "You went to the dining room. There are doors to the north, south and east.");
	(room + i)->to_east = dining_room;
	strcpy(((room + i)->west), "You bumped into a wall! Yikes.");
	(room + i)->to_west = bathroom;

}
