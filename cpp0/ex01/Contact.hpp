#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "header.hpp"

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		Contact(void);
		Contact(const Contact &source);
		~Contact(void);
		bool	empty(void) const;
		bool	set_infos(void);
		void	display_in_row(int index) const;
		void	display_detailed_infos(void) const;
};
#endif
