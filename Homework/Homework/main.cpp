//a constant method is the one that doesn't modify the class's properties

#include <stdio.h>
#include <stdlib.h>
#include <cmath>

struct point
{
	int x, y;
	void value()
	{
		x = 1;
		y = 1;
	}
};

void set_0(point *p)
{
	p->x = 0;
	p->y = 0;
}

bool is_zero(point p) //constant method
{
	return p.x == 0 && p.y == 0;
}

void addition(point *p, int x, int y)
{
	p->x = x + 1;
	p->y = y + 1;
}

void minus_equal(point *p, int x, int y)
{
	p->x -= x;
	p->y -= y;
}

void plus_equal(point *p, int x, int y)
{
	p->x += x;
	p->y += y;
}

void product(point *p, int x, int y)
{
	p->x *= x;
	p->y *= y;
}

bool not_equal(point p) //constant method
{
	return p.x != 0 && p.y != 0;
}

void set_point(point *p, point *q)
{
	p->x = q->x;
	p->y = q->y;
}

float distance(point *p, point *q)
{
	float x = 0, y = 0;
	x = (q->x) - (p->x);
	y = (q->y) - (p->y);
	return sqrt(((x)*(x)) + ((y)*(y)));
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	point p;
	point q;
	point o;

	q.x = q.y = 3;
	o.x = o.y = 10;


	float dist = 0;

	set_0(&p);
	p.value();
	bool ans = is_zero(p);
	minus_equal(&p, p.x, p.y);
	plus_equal(&p, p.x, p.y);
	addition(&p, p.x, p.y);
	product(&p, p.x, p.y);
	bool ans2 = not_equal(p);
	set_point(&p, &q);
	dist = distance(&p, &q);

	int a, b;
	swap(a, b);

	char* const t = NULL;


}
