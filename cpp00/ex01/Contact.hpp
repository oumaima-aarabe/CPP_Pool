/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:10:12 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/11/18 06:12:32 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

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
		~Contact();

		const std::string& getFirstName() const;
		const std::string& getLastName() const;
		const std::string& getNickname() const;
		const std::string& getPhoneNumber() const;
		const std::string& getDarkestSecret() const;

		void	set_first_name(const  std::string &f);
		void	set_last_name(const std::string &l);
		void	set_nickname(const std::string &n);
		void	set_phone_number(const std::string &ph);
		void	set_darkest_secret(const std::string &ds);
};

#endif
