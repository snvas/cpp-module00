#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include "Contact.hpp"
#include <iomanip>

#define CONTACT_NUM 8
#define RESET "\033[0m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"

class PhoneBook{
	public:
		PhoneBook();
		void loop();

	private:
		contact cot[8];
		int add_index;
		void printOne(std::string str) const;
		void printContactList() const;
		std::string inputOne(std::string put_string) const;
		void addCommand();
		void searchCommand() const;
		bool validPhoneNumber(std::string phoneNumber);
};

#endif