#include "contact.hpp"

void contact::createContact(std::string first_name,
						std::string last_name,
						std::string nickname,
						std::string phone_number,
						std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

void contact::printContact() const
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl; 
}

std::string contact::setFirstName() const
{
	return this->first_name;
}

std::string contact::setLastName() const
{
	return this->last_name;
}

std::string contact::setNickname() const
{
	return this->nickname;
}

bool contact::isEmpty() const
{
	return(this->first_name.empty());
}