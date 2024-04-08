#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	MyBook;
	std::string	Entry;

	std::cout << "Welcome to MyAwesomePhoneBook:\n";
	while (1)
	{
		std::cout << "ADD | SEARCH | EXIT\n";
		Entry.clear();
		std::getline(std::cin, Entry);
		if (Entry.compare("EXIT") == 0)
		{
			MyBook.Exit();
			break ;
		}
		else if (Entry.compare("ADD") == 0)
			MyBook.Add();
		else if (Entry.compare("SEARCH") == 0)
			MyBook.Search();
	}
	return (0);
}