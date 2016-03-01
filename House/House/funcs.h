#ifndef _FUNCS_
#define _FUNCS_

typedef struct
{
	char north[100]; //char string to know which room is where in the house, reference is always the room you're in
	int to_north; //to_(direction) assigns which room is in which direction, by giving it it's i value
	char east[100];
	int to_east;
	char south[100];
	int to_south;
	char west[100];
	int to_west;

}house; //creates room struct template

void map(house *room);

#endif