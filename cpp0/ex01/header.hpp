#ifndef HEADER_HPP
# define HEADER_HPP
# include <iomanip>
# include <iostream>
# include <cstdlib>
# include "unistd.h"
# define CONTACTS_LEN 2
# define FIELD_LEN 5
# define NUM_INDEX 3
# define COL_LEN 10
extern std::string g_fields[FIELD_LEN];
bool		isNotPrintable(const std::string &str);
bool		isNumber(const std::string &str);
std::string	putstr_inrow(const std::string &s);
#endif
