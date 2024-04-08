#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	// std::cout << "Constructor called (Contact)" << std::endl;
	return ;
}

Contact::~Contact(void) {

	// std::cout << "Destructor called (Contact)" << std::endl;
	return ;
}

std::string	Contact::GetFirstName(void){

	return (this->_FirstName);
}

void	Contact::SetFirstName(std::string str){

	this->_FirstName = str;
	return ;
}

std::string	Contact::GetLastName(void){

	return (this->_LastName);
}

void	Contact::SetLastName(std::string str){

	this->_LastName = str;
	return ;
}

std::string	Contact::GetNickName(void){

	return (this->_NickName);
}

void	Contact::SetNickName(std::string str){

	this->_NickName = str;
	return ;
}

std::string	Contact::GetPhoneNumber(void){

	return (this->_PhoneNumber);
}

void	Contact::SetPhoneNumber(std::string str){

	this->_PhoneNumber = str;
	return ;
}

std::string	Contact::GetDarkestSecret(void){

	return (this->_DarkestSecret);
}

void	Contact::SetDarkestSecret(std::string str){

	this->_DarkestSecret = str;
	return ;
}

void	Contact::DisplayContact(void) {

	std::cout << "First Name: " << Contact::GetFirstName() << "\n";
	std::cout << "Last Name: " << Contact::GetLastName() << "\n";
	std::cout << "Nickname: " << Contact::GetNickName() << "\n";
	std::cout << "Phone Number: " << Contact::GetPhoneNumber() << "\n";
	std::cout << "Darkest Secret: " << Contact::GetDarkestSecret() << std::endl;
	return ;
}