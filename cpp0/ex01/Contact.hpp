#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "header.hpp"

class Contact
{
	public:
		std::string _infos[FIELD_LEN];
		Contact(void);
		Contact(const Contact &source);
		~Contact(void);
		void	set_infos(void);
		void	display_infos(void);
};
#endif
