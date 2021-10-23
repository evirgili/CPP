#pragma once

#include <stack>
#include <deque>
#include <iostream>


template <typename T>
class MutantStack: public std::stack<T> {

	public:
		MutantStack();
		MutantStack(const MutantStack<T> &copy);
		virtual ~MutantStack();

		void	fillValues(size_t amount, int range);

		typedef typename std::stack<T>::container_type::iterator				iterator;
		iterator				begin();
		iterator				end();

		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		const_iterator			cbegin() const;
		const_iterator			cend() const;


		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		reverse_iterator		rbegin();
		reverse_iterator		rend();

		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		const_reverse_iterator	rbegin() const;
		const_reverse_iterator	rend() const;

		MutantStack	&operator= (const MutantStack<T>& assign);
};

template <typename T>
std::ostream &operator<<(std::ostream &stream, const MutantStack<T>& printed);

#include "MutantStack.ipp"
