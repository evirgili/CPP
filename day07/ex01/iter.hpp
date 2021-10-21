#pragma once

#include <iostream>

template <typename tArr>
void	iterate(tArr *begin, size_t arr_size, void (*f)(tArr *obj)) {

	for (size_t i = 0; i < arr_size; ++i) {
		f(&begin[i]);
	}
}
