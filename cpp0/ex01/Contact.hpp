#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "header.hpp"
//index, first_name, last_name, nickname, Input the
class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		Contact(void);
		~Contact(void);
};
#endif
