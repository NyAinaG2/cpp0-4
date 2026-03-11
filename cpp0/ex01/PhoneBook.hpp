#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "header.hpp"
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[CONTACTS_LEN];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);
};

#endif
