#ifndef HEADER_HPP
# define HEADER_HPP
# include <iomanip>
# include <iostream>
# include <cstdlib>
# include <csignal>
# define CONTACTS_LEN 8
# define FIELD_LEN 5
extern std::string g_fields[FIELD_LEN];
bool		isNotPrintable(const std::string &str);
bool		isNumber(const std::string &str);
std::string	putstr_inrow(const std::string &s);
#endif
