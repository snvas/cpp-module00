#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <string>
#include <iostream>

class contact{
	public:
		void createContact(std::string first_name,
						std::string last_name,
						std::string nickname,
						std::string phone_number,
						std::string darkest_secret);
		void printContact() const;
		std::string setFirstName() const;
		std::string setLastName() const;
		std::string setNickname() const;
		bool isEmpty() const;
	
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

};

#endif