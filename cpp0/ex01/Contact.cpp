#include "header.hpp"
#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(const Contact &source)
{
	this->_first_name = source._first_name;
	this->_last_name = source._last_name;
	this->_nickname = source._nickname;
	this->_phone_number = source._phone_number;
	this->_darkest_secret = source._darkest_secret;
}

bool Contact::empty(void) const
{
	return _first_name.empty();
}

bool Contact::set_infos(void)
{
	Contact tmp;
	for (size_t i = 0; i < FIELD_LEN; i++)
	{
		std::cout << "(ADD) " << g_fields[i] << ">";
		std::string line;
		if (!std::getline(std::cin, line) || std::cin.eof())
			std::exit(0);
		if (line.empty() || isNotPrintable(line))
		{
			std::cout << "Invalid input" << std::endl;
			return false;
		}
		if (i == 3 && !isNumber(line))
		{
			std::cout << "Invalid phone number" << std::endl;
			return false;
		}
		switch (i)
		{
			case 0:
				tmp._first_name = line;
				break;
			case 1:
				tmp._last_name = line;
				break;
			case 2:
				tmp._nickname = line;
				break;
			case 3:
				tmp._phone_number = line;
				break;
			case 4:
				tmp._darkest_secret = line;
				break;
		}
	}
	*this = tmp;
	return true;
}

void Contact::display_in_row(int index) const
{
	std::cout << std::setw(10) << index + 1 << "|";
	std::cout << std::setw(10) << putstr_inrow(_first_name) << "|";
	std::cout << std::setw(10) << putstr_inrow(_last_name) << "|";
	std::cout << std::setw(10) << putstr_inrow(_nickname) << std::endl;
}

void Contact::display_detailed_infos(void) const
{
	if (empty())
	{
		std::cout << "Contact not found" << std::endl;
		return;
	}
	std::cout << std::setw(15) << g_fields[0] << ": " << _first_name << std::endl;
	std::cout << std::setw(15) << g_fields[1] << ": " << _last_name << std::endl;
	std::cout << std::setw(15) << g_fields[2] << ": " << _nickname << std::endl;
	std::cout << std::setw(15) << g_fields[3] << ": " << _phone_number << std::endl;
	std::cout << std::setw(15) << g_fields[4] << ": " << _darkest_secret << std::endl;
}


