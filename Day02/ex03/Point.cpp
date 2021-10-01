#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {}

Point::Point(float const x, float const y): _x(x), _y(y) {}

Point::Point(const Point &copy): _x(copy._x), _y(copy._y) {}

Point::~Point() {}


Point	&Point::operator= (Point const &assigned) {
	(void)assigned;
	return (*this);
}

const Fixed		&Point::getX_Fixed() const {
	return (this->_x);
}

const Fixed		&Point::getY_Fixed() const {
	return (this->_y);
}

float		Point::getX_Float() const {
	return (getX_Fixed().toFloat());
}

float		Point::getY_Float() const {
	return (getY_Fixed().toFloat());
}

