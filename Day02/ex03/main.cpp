#include "Point.hpp"

// https://abakbot.ru/online-2/280-pointreug

int main(void)
{
	Point a = Point(1,1);
	Point b = Point(20,20);
	Point c = Point(3,10);
	float	x, y;

	while (1)
	{
		std::cout << "x, y:  ";
		std::cin >> x >> y;
		if (std::cin.eof())
			break;
		if (!std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Wrong input\n";
			continue;
		}
		Point p = Point(x, y);
		std::cout << "(" << p.getX_Float() << ", " << p.getY_Float()  << ") ";
		if (bsp(a, b, c, p))
			std::cout << "is inside.\n";
		else
			std::cout << "is not inside.\n";
	}
	return 0;
}
