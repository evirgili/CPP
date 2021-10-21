#pragma once

#include <iostream>

template <class t>
void	swap(t &a,t &b)	{
	t tmp = a;
	a = b;
	b = tmp;
}

template <class t>
class Array {

	private:
		size_t	_size;
		t		*_arr;
	public:
		Array();
		Array(size_t const size);
		Array(const Array &copy);
		~Array();

		size_t	size() const;

		Array	&operator= (Array const &assign);
		t		&operator[](const size_t index);
		t const	&operator[](const size_t index) const;

		class BadIndexException: public std::exception {
			virtual const char* what() const throw();
		};
};

template <class t>
Array<t>::Array() {

	_arr = NULL;
	_size = 0;
}

template <class t>
Array<t>::Array(size_t const size) {

	_size = size;
	_arr = new t[size];
	memset(_arr, 0, sizeof(t) * size);
}

template <class t>
Array<t>::Array(const Array &copy) {

	_size = copy._size;
	_arr = _size ? new t[_size] : NULL;
	memmove(_arr, copy._arr, sizeof(t) * _size);
}

template <class t>
Array<t>::~Array() {

	if (_size)
		delete[] _arr;
}

template <class t>
size_t	Array<t>::size() const {
	return (this->_size);
}

template <class t>
Array<t>	&Array<t>::operator= (Array<t> const &assign) {
	if (this != &assign)
	{
		if (_size)
			delete[] _arr;
		_size = assign._size;
		_arr = _size ? new t[_size] : NULL;
		memmove(_arr, assign._arr, sizeof(t) * _size);
	}
		return *this;
}

template <class t>
t		&Array<t>::operator[](const size_t index) {

	if (index < 0 || index > _size - 1)
		throw BadIndexException();
	return (this->_arr[index]);
}

template <class t>
t const	&Array<t>::operator[](const size_t index) const {

	if (index < 0 || index > _size - 1)
		throw BadIndexException();
	return (this->_arr[index]);
}

template <class t>
const char* Array<t>::BadIndexException::what() const throw()	{
	return "Passed index is invalid\n";
}

template <class t>
std::ostream &operator<<(std::ostream &stream, const Array<t>& printed)	{

	stream << "[ ";
	for (size_t	i = 0; i < printed.size(); ++i)	{
		stream << printed[i] << ", ";
	}
	stream << printed[printed.size() - 1] << "]" << std::endl;
	return stream;
}
