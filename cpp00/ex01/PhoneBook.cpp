/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:53:01 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/11/20 06:55:42 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void   print_contact(std::string str)
{
	if (str.length() == 10)
		std::cout<< str;
	else if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else if (str.length() < 10)
		std::cout << std::string(10 - str.length(), ' ') << str;
}

bool check_ws(const std::string &str) 
{
    for (size_t i = 0; i < str.length(); ++i)
	{
        if (!std::isspace(str[i]))
            return false;
    }
    return true;
}

	int    PhoneBook::add_contact()
	{
		Contact new_contact;
		std::string first_name;
		while (first_name.empty() || check_ws(first_name))
		{
			std::cout << "Enter first name: ";
			if (!getline(std::cin, first_name))
				return (1);
		}
		new_contact.set_first_name(first_name);

		std::string last_name;
		while (last_name.empty() || check_ws(last_name))
		{	
			std::cout << "Enter last name: ";
			if (!getline(std::cin, last_name))
				return (1);
		}
		new_contact.set_last_name(last_name);

		std::string nickname;
		while (nickname.empty() || check_ws(nickname))
		{	
			std::cout << "Enter nickname: ";
			if(!getline(std::cin, nickname))
				return (1);
		}
		new_contact.set_nickname(nickname);

		std::string phone_number;
		while (phone_number.empty() || check_ws(phone_number))
		{
			
			std::cout << "Enter phone number: ";
			if (!getline(std::cin, phone_number))
				return (1);
		}
		new_contact.set_phone_number(phone_number);

		std::string darkest_secret;
		while (darkest_secret.empty() || check_ws(darkest_secret))
		{		
			std::cout << "Enter Darkest Secret: ";
			if (!getline(std::cin, darkest_secret))
				return (1);
		}
		new_contact.set_darkest_secret(darkest_secret);

		contacts[nb_contacts % 8] = new_contact;
		nb_contacts++;
		
		return (0);
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
			std::cout << std::string(9, ' ') << (i + 1) << "|";
			print_contact(contacts[i].getFirstName());
			std::cout << "|";
			print_contact(contacts[i].getLastName());
			std::cout << "|";
			print_contact(contacts[i].getNickname());
			std::cout << "\n";
		}
		int flag = 0;
		while (!flag)
		{
			if (nb_contacts > 8)
				std::cout << "Enter index between 1 and 8" << std::endl;
			else			
				std::cout << "Enter index between 1 and " << nb_contacts << std::endl;
			std::string inde;
			if(!getline(std::cin, inde))
				break;
			if (!inde.empty() && !check_ws(inde))
			{	
				if (inde.length() == 1)
				{
					int index = std::atoi(inde.c_str());
					if (index > 0  && index <= nb_contacts  && index <= 8)
					{
						std::cout << "First name: " << contacts[index - 1].getFirstName() << "\n";
						std::cout << "Last name: " << contacts[index - 1].getLastName() << "\n";
						std::cout << "Nickname: " << contacts[index  - 1].getNickname() << "\n";
						std::cout << "Phone number: " << contacts[index - 1].getPhoneNumber() << "\n";
						std::cout << "Darkest secret: " << contacts[index - 1].getDarkestSecret() << "\n";
						flag = 1;
					}
					else
						std::cout << "Invalid index\n";	
				}
				else
					std::cout << "Invalid index\n";
			}
		}
	}

PhoneBook::PhoneBook()
{
	nb_contacts = 0;
}

PhoneBook::~PhoneBook()
{

}

