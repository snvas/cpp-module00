#include "PhoneBook.hpp"

void	PhoneBook::title(void)
{
	std::cout << MAGENTA << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << RESET << std::endl;
	std::cout << "Welcome to your phonebook!\nThe available entries are: " << std::endl;
	std::cout << "█ ADD: add a contact" << std::endl;
	std::cout << "█ SEARCH: Display a contact" << std::endl;
	std::cout << "█ EXIT: Exit the program\n\n" << std::endl;
}

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

	book.title();
	book.loop();
}
