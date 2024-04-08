#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include "Contact.hpp"

class PhoneBook {

private:
	Contact ContactList[8];
	int		Index;

public :
	PhoneBook(void);
	~PhoneBook(void);

	void	Add(void);
	void	Search(void);
	void	Exit(void);

	bool	IsNumeric(std::string str);
	std::string	ShortenStr(std::string str);

};

#endif
