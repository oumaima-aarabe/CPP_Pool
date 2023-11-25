/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 08:17:04 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/11/21 13:21:02 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;

	std::cout << "Welcome to my Phonebook " << std::endl ;
	while (1)
	{
		std::cout << "Enter a command <ADD> <SEARCH> or <EXIT> : ";
		if(!getline(std::cin, command) || std::cin.eof())
		{
			std::cout << "\n" << "END OF INPUT , Exiting program" << std::endl;
			break;
		}
		if (command == "ADD"){
			
            if (phonebook.add_contact())
			{
				std::cout << "\n" << "END OF INPUT , Exiting program" << std::endl;
				break;
			}
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
