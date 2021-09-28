#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>

class Replace	{

	private:
		std::ifstream	_input_file;
		std::ofstream	_output_file;
		std::string		_in_filename;
		std::string		_out_filename;
		std::string		_s1;
		std::string		_s2;
	public:
		Replace(const std::string file_name);
		Replace(const Replace &copy);
		~Replace();
		void			form_replacing(const std::string s1, const std::string s2);
		void			replace(std::string &line);
};


#endif
