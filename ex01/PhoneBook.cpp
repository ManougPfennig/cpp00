#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	// std::cout << "Contructor called (Phonebook)" << std::endl;
	this->Index = 0;
	return ;
}

PhoneBook::~PhoneBook(void){

	// std::cout << "Destructor called (PhoneBook)" << std::endl;
	return ;
}

void	PhoneBook::Add(void){

	std::string	Input;

	if (this->Index == 8)
		this->Index = 0;

	// set FirstName
	std::cout << "Contact's First Name:" << std::endl;
	Input.clear();
	while (Input.empty())
		std::getline(std::cin, Input);
	this->ContactList[this->Index].SetFirstName(Input);

	// set LastName
	std::cout << "Contact's Last Name:" << std::endl;
	Input.clear();
	while (Input.empty())
		std::getline(std::cin, Input);
	this->ContactList[this->Index].SetLastName(Input);

	// set NickName
	std::cout << "Contact's Nick Name:" << std::endl;
	Input.clear();
	while (Input.empty())
		std::getline(std::cin, Input);
	this->ContactList[this->Index].SetNickName(Input);

	// set Phone Number
	std::cout << "Contact's Phone Number:" << std::endl;
	Input.clear();
	while (Input.empty())
		std::getline(std::cin, Input);
	this->ContactList[this->Index].SetPhoneNumber(Input);

	// set Darkest Secret
	std::cout << "Contact's Darkest Secret:" << std::endl;
	Input.clear();
	while (Input.empty())
		std::getline(std::cin, Input);
	this->ContactList[this->Index].SetDarkestSecret(Input);

	this->Index++;
}

// If string's len is higher than 10, returns a shortened version
std::string	PhoneBook::ShortenStr(std::string str){

	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

bool	PhoneBook::IsNumeric(std::string str){

	if (str.length() == 0)
		return (false);
	for (char c : str)
	{
		if (!isdigit(c))
			return (false);
	}
    return (true);
}

void	PhoneBook::Search(void){

	Contact		Cont;
	int			Index;
	std::string	Input;

	for (int i = 0; i < 8; ++i)
	{
		Cont = PhoneBook::ContactList[i];
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << PhoneBook::ShortenStr(Cont.GetFirstName()) << "|";
		std::cout << std::setw(10) << PhoneBook::ShortenStr(Cont.GetLastName()) << "|";
		std::cout << std::setw(10) << PhoneBook::ShortenStr(Cont.GetNickName()) << std::endl;
	}
	Index = 0;
	std::cout << "Enter Contact's Index" << std::endl;
	std::getline(std::cin, Input);
	if (PhoneBook::IsNumeric(Input) == true)
		Index = std::stoi(Input);
	if (Index < 9 && Index > 0)
	{
		Cont = PhoneBook::ContactList[(Index - 1)];
		Cont.DisplayContact();
	}
	else
		std::cout << "Invalid Index" << std::endl;
	return ;
}

void	PhoneBook::Exit(void){

	std::cout << "Goodbye..." << std::endl;
	return ;
}