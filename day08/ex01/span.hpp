#pragma once

#include <iostream>
#include <algorithm>

class Span {

	private:
		size_t	_size;
		size_t	filled;
		int		max;
		int		min;
		int		*_container;
	public:
		Span();
		Span(Span const &copy);
		Span(size_t const size);
		~Span();

		size_t		size() const;
		size_t		length() const;
		void		addNumber(int new_number);
		void		fillContainer(int range);
		int64_t		longestSpan();
		int64_t		shortestSpan();

		Span		&operator= (Span const &assign);
		int			&operator[](const size_t index);
		int const	&operator[](const size_t index) const;

		class FullConException: public std::exception {
			virtual const char* what() const throw() {
				return "Container is full\n";
			}
		};
		class BadIndexException: public std::exception {
			virtual const char* what() const throw() {
				return "Passed index is invalid\n";
			}
		};
		class ErrorSpanException: public std::exception {
			virtual const char* what() const throw() {
				return "Find span imposible\n";
			}
		};
};

std::ostream &operator<<(std::ostream &stream, const Span& printed);
