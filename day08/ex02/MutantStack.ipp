#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()	{};

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>(copy)	{};

template <typename T>
MutantStack<T>::~MutantStack()	{};

template<typename T>
void	MutantStack<T>::fillValues(size_t amount, int range)	{
	for (size_t i = 0; i < amount; ++i)	{
		MutantStack<T>::push(std::rand() % range);
	}
}

//-----------iterator--------------//

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()	{
	return (this->c.end());
}

//-----------const iterator--------------//

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void)	const {
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const	{
	return (this->c.end());
}

//-----------reverse--------------//

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)	{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)	{
	return (this->c.rend());
}

//-----------const reverse--------------//

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin(void) const	{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend(void) const	{
	return (this->c.rend());
}
//-----------------------------------//

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T>& assign)	{	// ???
	this = assign;
	return (*this);
}

template <typename T>
std::ostream &operator<<(std::ostream &stream, const MutantStack<T>& printed)	{
	stream << "[ ";
	for (typename MutantStack<T>::const_iterator cit = printed.begin();  cit !=  printed.cend(); ++cit)	{
		stream << *cit << " ";
	}
	stream << "]";
	return stream;
}


