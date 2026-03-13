#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "header.hpp"

class Contact
{
	private:
		std::string _infos[FIELD_LEN];
	public:
		Contact(void);
		Contact(const Contact &source);
		~Contact(void);
		bool	set_infos(void);
		void	display_in_row(int index);
		void	display_detailed_infos(void);
		bool	empty(void) const;
};
#endif
