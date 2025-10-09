/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:29:08 by kbarru            #+#    #+#             */
/*   Updated: 2025/09/12 17:26:24 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Contact.hpp"
#include <iomanip>

Contact::Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
	:	m_first_name(first_name),
		m_last_name(last_name),
		m_nickname(nickname),
		m_phone_number(phone_number),
		m_darkest_secret(darkest_secret)
{
}

Contact::Contact(Contact &other)
{
	this->m_first_name = other.m_first_name;
	this->m_last_name = other.m_last_name;
	this->m_nickname = other.m_nickname;
	this->m_darkest_secret = other.m_darkest_secret;
}

Contact::~Contact()
{
}

void Contact::operator=(const Contact &other)
{
	this->m_first_name = other.m_first_name;
	this->m_last_name = other.m_last_name;
	this->m_nickname = other.m_nickname;
	this->m_phone_number = other.m_phone_number;
	this->m_darkest_secret = other.m_darkest_secret;
}

bool Contact::isValid() const
{
	return (!this->m_first_name.empty() && !this->m_last_name.empty() \
	&& !this->m_nickname.empty() && !this->m_phone_number.empty() \
	&& !this->m_darkest_secret.empty());
}

void Contact::print() const
{
	std::string attributes[4] = {this->m_first_name, m_last_name, m_nickname, m_phone_number};
	for (int i = 0; i < 4; ++i)
	{
		std::cout << std::setw(10);
		if (attributes[i].length() <= 10)
			std::cout << attributes[i];
		else
			std::cout << attributes[i].substr(0, 9) + ".";
		std::cout << "|";
	}
	std::cout << std::endl;
}

void Contact::printFull() const
{
	std::cout << "First Name :		" << this->m_first_name << std::endl;
	std::cout << "Last Name :		" << this->m_last_name << std::endl;
	std::cout << "Nickname :		" << this->m_nickname << std::endl;
	std::cout << "Phone number :		" << this->m_phone_number << std::endl;
	std::cout << "Darkest secret :	" << this->m_darkest_secret << std::endl;
}

void Contact::setFirstName(std::string newString)
{
	this->m_first_name = newString;
}

void Contact::setLastName(std::string newString)
{
	this->m_last_name = newString;
}

void Contact::setNickname(std::string newString)
{
	this->m_nickname = newString;
}

void Contact::setPhoneNumber(std::string newString)
{
	this->m_phone_number = newString;
}

void Contact::setDarkestSecret(std::string newString)
{
	this->m_darkest_secret = newString;
}
