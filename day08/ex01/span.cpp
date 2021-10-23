#include "span.hpp"
#include <algorithm>

Span::Span() {
	_size = 0;
	filled = 0;
	min = INT_MAX;
	max = INT_MIN;
	_container = NULL;
}

Span::Span(size_t const size) {
	_size = size;
	filled = 0;
	min = INT_MAX;
	max = INT_MIN;
	_container = new int[size];
	memset(_container, 0, sizeof(int) * size);
}

Span::Span(Span const &copy) {
	_size = copy._size;
	filled = copy.filled;
	min = copy.min;
	max = copy.max;
	_container = _size ? new int[_size] : NULL;
	memmove(_container, copy._container, sizeof(int) * _size);
}

Span::~Span()	{
	if (_size)
		delete[] _container;
}

size_t	Span::size() const	{ return (this->_size); }

size_t	Span::length() const	{ return filled; }

void	Span::fillContainer(int range)	{
	for (size_t i = 0; i < _size; ++i)	{
		// std::rand() is kinda expensive tho
		// _container[i] = std::rand() % range;
		_container[i] = range + i;
		if (_container[i] <=  min)
			min = _container[i];
		if (_container[i] > max)
			max = _container[i];
	}
	filled = _size;
}

void	Span::addNumber(int new_number)	{

	if (filled == _size - 1)
		throw FullConException();
	_container[filled] = new_number;
	++filled;
}

int64_t	Span::longestSpan()	{
	int64_t holder = max - min;
	if (filled < 2 || !holder)
		throw ErrorSpanException();
	return holder;
}

int64_t	Span::shortestSpan()	{

	int64_t shortest = INT_MAX;
	int64_t holder;
	std::sort(&_container[0], _container + _size);
	for (size_t i = 1; i < _size; ++i)	{
		holder = abs(_container[i] - _container[i-1]);
		if (holder < shortest)
			shortest = holder;
	}
	if (!shortest)
		throw ErrorSpanException();
	return shortest;
}

int	&Span::operator[](const size_t index)	{

	if (index < 0 || index > filled - 1)
		throw BadIndexException();
	return (this->_container[index]);
}

int const	&Span::operator[](const size_t index) const	{

	if (index < 0 || index > filled - 1)
		throw BadIndexException();
	return (this->_container[index]);
}

std::ostream &operator<<(std::ostream &stream, const Span& printed)	{

	stream << "[ ";
	for (size_t	i = 0; i < printed.size(); ++i)	{
		stream << printed[i] << ", ";
	}
	stream << printed[printed.size() - 1] << "]" << std::endl;
	return stream;
}
