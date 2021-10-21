#pragma once

#include <iostream>

class Data {

	private:
		int		i_value;
		float	f_value;
	public:
		Data();
		Data(int i, float f);
		Data(const Data &copy);
		virtual ~Data();

		int		getIvalue() const;
		float	getFvalue() const;

		Data	&operator= (Data const &assign);
};

std::ostream & operator<<(std::ostream &stream, Data const &printed);
