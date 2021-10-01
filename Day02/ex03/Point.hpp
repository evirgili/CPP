#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{

	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point &copy);
		~Point();

		Point		&operator=(Point const &assign);

		const Fixed	&getX_Fixed() const;
		const Fixed	&getY_Fixed() const;
		float		getX_Float() const;
		float		getY_Float() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
