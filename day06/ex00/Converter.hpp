#pragma once

#include <iomanip>
#include <iostream>
#include <climits>
#include <cstdlib>
#include <string>

// bool	ft_strtod(double *filler, std::string input);

class Converter {

	private:
		double	_value;
		int		_lenght;
		bool	_isNan;
		bool	_isPlusInf;
		bool	_isMinusInf;
		bool	_isZero;
	public:
		Converter();
		Converter(std::string const &value);
		Converter(const Converter &copy);
		~Converter();

		double		getValue() const;
		int			getLenght() const;
		bool		getIsNan() const;
		bool		getIsPlusInf() const;
		bool		getIsMinusInf() const;
		bool		getIsZero() const;
		void		ToInt();
		void		ToChar();
		void		ToDouble();
		void		ToFloat();
		void		All();

		Converter & operator=(Converter const &rhs);

};
