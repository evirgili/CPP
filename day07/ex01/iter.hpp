#pragma once

#include <iostream>

template <typename tArr>
void	iterate(tArr *begin, size_t arr_size, void (*f)(tArr &obj)) {
	if (arr_size <= 0)
		return ;
	for (size_t i = 0; i < arr_size; ++i) {
		f(begin[i]);
	}
}

template <typename tArr>
void	iterate(tArr const *begin, size_t arr_size, void (*f)(const tArr &obj)) {
	if (arr_size <= 0)
		return ;
	for (size_t i = 0; i < arr_size; ++i) {
		f(begin[i]);
	}
}
