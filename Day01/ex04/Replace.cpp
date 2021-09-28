#include "Replace.hpp"

Replace::Replace(const std::string file_name){
	std::string		str;

	_in_filename = file_name;
	_input_file.open(_in_filename.c_str(), std::ifstream::in);
	if (!_input_file.is_open()){
		std::cout << "Error!" << std::endl;
		exit(errno);
	}
	str = file_name;
	std::transform(str.begin(), str.end(), str.begin(), toupper);
	_out_filename = std::string(str).append(".replace");
}

Replace::Replace(const Replace &copy)	{
	this->_in_filename = copy._in_filename;
}

void	Replace::form_replacing(const std::string s1, const std::string s2){

	std::string		line;

	_s1 = s1;
	_s2 = s2;
	_output_file.open(_out_filename.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!_output_file.is_open()){
		std::cout << "Error!" << std::endl;
		exit(errno);
	}
	while(getline(_input_file, line))	{
		replace(line);
		_output_file << line << std::endl;
	}
}

void	Replace::replace(std::string &line){

	size_t		pos = 0;

	while ((pos = line.find(_s1, pos)) != std::string::npos)	{
		line.erase(pos, _s1.length());
		line.insert(pos, _s2);
		pos += _s2.length();
	}
}

Replace::~Replace(void){

	if (_output_file.is_open())
		_output_file.close();
	if (_input_file.is_open())
		_input_file.close();
}
