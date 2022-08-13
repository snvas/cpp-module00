#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include "contact.hpp"
#include <iomanip>

#define CONTACT_NUM 8
#define RESET "\033[0m"
#define BLUE "\033[34m" /*Blue*/
#define MAGENTA "\033[35m"

class PhoneBook{
	private:
		contact cot[8];
		int add_index;

		void put_one(std::string str) const;
		void put_contact_list() const;
		std::string input_one(std::string put_string) const;
		void add_command();
		void search_command() const;
		bool validPhoneNumber(std::string phoneNumber);

	public:
		void title(void);
		PhoneBook();
		void loop();

};

#endif