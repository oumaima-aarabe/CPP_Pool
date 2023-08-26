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

	void    PhoneBook::add_contact()
	{
		std::cout << "Enter first name: ";
		std::cin >> contacts[nb_contacts % 8].first_name;
		std::cout << "Enter last name: ";
		std::cin >> contacts[nb_contacts % 8].last_name;
		std::cout << "Enter nickname: ";
		std::cin >> contacts[nb_contacts % 8].nickname;
		std::cout << "Enter phone number: ";
		std::cin >> contacts[nb_contacts % 8].phone_number;
		std::cout << "Enter Darkest Secret: ";
		std::cin >> contacts[nb_contacts % 8].darkest_secret;
		std::cin.ignore();
		nb_contacts++;
	}
	void	PhoneBook::search_contact()
	{
		for (int i = 0;(i < 8 && i < nb_contacts); i++)
		{
			std::cout << std::string(10, ' ') << i << "|";
			print_contact(contacts[i].first_name);
			std::cout << "|";
			print_contact(contacts[i].last_name);
			std::cout << "|";
			print_contact(contacts[i].nickname);
			std::cout << "\n";
		}
		std::cout << "Enter index: ";
		std::string inde;
		std::getline(std::cin, inde);
		int index = std::strtod(inde.c_str(), NULL);
		if (index < 8 && index < nb_contacts)
		{
			std::cout  << index << "\n";
			std::cout << "First name: " << contacts[index].first_name << "\n";
			std::cout << "Last name: " << contacts[index].last_name << "\n";
			std::cout << "Nickname: " << contacts[index].nickname << "\n";
			std::cout << "Phone number: " << contacts[index].phone_number << "\n";
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
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command\n";
		command.clear();
	}
}
