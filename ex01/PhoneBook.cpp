#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : addIndex(0){
	std::cout << "Welcome to PhoneBook! Created a list for up to 8 contacts" << std::endl;
}

void PhoneBook::printOne(std::string str) const
{
	size_t	str_len;

	str_len = str.length();
	if (str_len <= 10)
	{
		std::cout << std::setw(10) << std::right << str;
	}
	else
	{
		std::cout << str.substr(0, 9) << ".";
	}
}

void PhoneBook::printContactList() const
{
	int i;

	i = 0;
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "Index";
	std::cout << "|" << std::setw(10) << std::right << "First name";
	std::cout << "|" << std::setw(10) << std::right << "Last name";
	std::cout << "|" << std::setw(10) << std::right << "Nickname" << "|" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	while(i < CONTACT_NUM && !cont[i].isEmpty())
	{
		std::cout << "|" << std::setw(10) << std::right << i + 1;
		std::cout << "|" << std::setw(10);
		printOne(cont[i].getFirstName());
		std::cout << "|" << std::setw(10);
		printOne(cont[i].getLastName());
		std::cout << "|" << std::setw(10);
		printOne(cont[i].getNickname());
		std::cout << "|" << std::endl;
		++i;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}

std::string PhoneBook::inputOne(std::string put_string) const
{
	std::string str;

	while(str.empty())
	{
		std::cout << RESET << put_string << BLUE <<std::endl;
		if (std::getline(std::cin, str).eof())
			break;
	}
	return str;
}

void PhoneBook::addCommand()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << BLUE << "Please input the contact information:" << std::endl;
	first_name = inputOne("Enter first name");
	last_name = inputOne("Enter last name");
	nickname = inputOne("Enter nickname");
	phone_number = inputOne("Enter phone number");
	darkest_secret = inputOne("Enter darkest secret");
	cont[addIndex].createContact(first_name, last_name, nickname, phone_number, darkest_secret);
	std::cout << MAGENTA << "Registration is complete\n" << RESET << std::endl;
	if(addIndex == CONTACT_NUM - 1)
		std::cout << "Your phonebook is full.\nIf you want to add a new contact, I am going to delete the first contact I stored, index #1." << std::endl;
	addIndex = (addIndex + 1) % CONTACT_NUM;
}

void PhoneBook::searchCommand() const
{
	if(cont[0].isEmpty())
	{
		std::cout << MAGENTA << "There are no contacts to display\n" << RESET << std::endl;
		return ;
	}
	printContactList();
	while (true)
	{
		std::string str;

		std::cout << BLUE << "Enter an index" << RESET << std::endl;
		if(std::getline(std::cin, str).eof())
			break;
		if(str.length() == 1 && \
			'1' <= str[0] && str[0] <= '8' && \
			!cont[str[0] - '1'].isEmpty())
			{
				cont[str[0] - '1'].printContact();
				std::cout << std::endl;
				break;
			}
			else{
				std::cout << MAGENTA << "Invalid input" << RESET << std::endl;
			}
	}
}

void PhoneBook::loop()
{
	while (true)
	{
		std::string command;

		std::cout << "Please choose one of the options: "
			<< "ADD, SEARCH or EXIT" << std::endl;
		if (std::getline(std::cin, command).eof())
			break;
		if (command == "ADD")
			addCommand();
		else if (command == "SEARCH")
			searchCommand();
		else if (command == "EXIT")
		{
			std::cout << MAGENTA << "Your contacts are lost forever! Bye bye!" << RESET << std::endl;
			break;
		}
	}
}
