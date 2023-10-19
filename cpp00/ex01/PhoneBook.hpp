/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:15:22 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/08/23 02:20:53 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>


void   print_contact(std::string str);

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact();

		const std::string& getFirstName() const;
		const std::string& getLastName() const;
		const std::string& getNickname() const;
		const std::string& getPhoneNumber() const;
		const std::string& getDarkestSecret() const;

		void	set_first_name(const std::string &f);
		void	set_last_name(const std::string &l);
		void	set_nickname(const std::string &n);
		void	set_phone_number(const std::string &ph);
		void	set_darkest_secret(const std::string &ds);
};

class PhoneBook 
{
	Contact contacts[8];
	int     nb_contacts;
	public:
		PhoneBook();
		~PhoneBook();
		void    add_contact(Contact &new_contact);
		void	search_contact();
};

#endif