#ifndef CHECKERS_HPP
# define CHECKERS_HPP

#include <iostream>

bool	checker_char(const std::string& str);
bool	checker_number(const std::string& str);
bool	checker_specials(std::string str);

void	convert_char(const std::string& str);
void	convert_int(const std::string& str);
void	convert_double(const std::string& str);
void	convert_float(const std::string& str);
void	convert_specials(const std::string& str);



#endif