#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact {

private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_PhoneNumber;
	std::string	_DarkestSecret;

public :
	Contact(void);
	~Contact(void);

	std::string	GetFirstName(void);
	void		SetFirstName(std::string str);

	std::string	GetLastName(void);
	void		SetLastName(std::string str);

	std::string	GetNickName(void);
	void		SetNickName(std::string str);

	std::string	GetPhoneNumber(void);
	void		SetPhoneNumber(std::string str);

	std::string	GetDarkestSecret(void);
	void		SetDarkestSecret(std::string str);

	void		DisplayContact(void);
};

#endif
