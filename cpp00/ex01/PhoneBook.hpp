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
#include <cstring>
#include <stdlib.h>
#include "Contact.hpp"

void   print_contact(std::string str);

class PhoneBook 
{
	private:
		Contact contacts[8];
		int     nb_contacts;
	public:
		PhoneBook();
		~PhoneBook();
		void    add_contact();
		void	search_contact();
};

#endif
