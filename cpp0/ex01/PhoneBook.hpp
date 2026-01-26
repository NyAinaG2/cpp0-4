#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "header.hpp"
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	searh(void);
};

#endif
