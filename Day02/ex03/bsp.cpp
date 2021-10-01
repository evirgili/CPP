#include "Point.hpp"

static float def_direction(Point p1, Point p2, Point p3)
{
	float dir;

	dir = (p2.getX_Float() - p3.getX_Float()) * (p1.getY_Float() - p3.getY_Float())
		- (p2.getY_Float() - p3.getY_Float()) * (p1.getX_Float() - p3.getX_Float());

	return (dir);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float dir_1, dir_2, dir_3;

	dir_1 = def_direction(point, a, b);
	dir_2 = def_direction(point, b, c);
	dir_3 = def_direction(point, c, a);

	return ((dir_1 <= 0 && dir_2 <= 0 && dir_3 <= 0) || (dir_1 >= 0 && dir_2 >= 0 && dir_3 >= 0));
}
