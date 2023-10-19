/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:53:01 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/08/23 02:19:14 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void   print_contact(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else if (str.length() < 10)
		std::cout << std::string(10 - str.length(), ' ') << str;
}

	void    PhoneBook::add_contact( Contact &new_contact)
	{
		std::cout << "Enter first name: ";
		std::string first_name;
		std::cin >> first_name;
		new_contact.set_first_name(first_name);

		std::cout << "Enter last name: ";
		std::string last_name;
		std::cin >> last_name;
		new_contact.set_last_name(last_name);

		std::cout << "Enter nickname: ";
		std::string nickname;
		std::cin >> nickname;
		new_contact.set_nickname(nickname);

		std::cout << "Enter phone number: ";
		std::string phone_number;
		std::cin >> phone_number;
		new_contact.set_phone_number(phone_number);

		std::cout << "Enter Darkest Secret: ";
		std::string darkest_secret;
		std::cin >> darkest_secret;
		new_contact.set_darkest_secret(darkest_secret);

		contacts[nb_contacts % 8] = new_contact;
		std::cin.ignore();
		nb_contacts++;
	}
	void	PhoneBook::search_contact()
	{
		if (nb_contacts == 0) 
		{
        	std::cout << "No contacts to display." << std::endl;
        	return;
    	}
		for (int i = 0;(i < 8 && i < nb_contacts); i++)
		{
			std::cout << std::string(10, ' ') << i << "|";
			print_contact(contacts[i].getFirstName());
			std::cout << "|";
			print_contact(contacts[i].getLastName());
			std::cout << "|";
			print_contact(contacts[i].getNickname());
			std::cout << "\n";
		}
		std::cout << "Enter index: ";
		std::string inde;
		std::getline(std::cin, inde);
		int index = std::strtod(inde.c_str(), NULL);
		if (index < 8 && index < nb_contacts)
		{
			std::cout  << index << "\n";
			std::cout << "First name: " << contacts[index].getFirstName() << "\n";
			std::cout << "Last name: " << contacts[index].getLastName() << "\n";
			std::cout << "Nickname: " << contacts[index].getNickname() << "\n";
			std::cout << "Phone number: " << contacts[index].getPhoneNumber() << "\n";
		}
		else
			std::cout << "Invalid index\n";
	}

PhoneBook::PhoneBook()
{
	nb_contacts = 0;
}

PhoneBook::~PhoneBook(){
}

int main()
{
	PhoneBook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Enter a command: ";
		if(!getline(std::cin, command))
		{
			std::cout << "\n" << "END OF INPUT , Exiting program" << std::endl;
			break;
		}
		if (command == "ADD")
		{

			Contact newContact;
            phonebook.add_contact(newContact);
		}
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command\n";
		command.clear();
	}
}
