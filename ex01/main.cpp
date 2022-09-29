#include "PhoneBook.hpp"

bool PhoneBook::validPhoneNumber(std::string phoneNumber){
	std::string set = "0123456789 +-()";

	if(phoneNumber.length() < 8 || phoneNumber.length() > 16){
		std::cout << RESET << "Invalid phone number!"
				<< std::endl << std::endl;
		return(false);
	}
	for (std::string::iterator it = phoneNumber.begin(); it != phoneNumber.end(); ++it)
	{
		if (set.find(*it) == std::string::npos){
			std::cout << "Invalid phone number!"
				<< std::endl << std::endl;
			return (false);
		}
	}
	return(true);
}

int main (void)
{
	PhoneBook book;

	book.loop();
}
