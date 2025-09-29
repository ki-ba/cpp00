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
	std::cout << "[Contact]	Default constructor called" << std::endl;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
	:	m_first_name(first_name),
		m_last_name(last_name),
		m_nickname(nickname),
		m_phone_number(phone_number),
		m_darkest_secret(darkest_secret)
{
	std::cout << "[Contact]	Parameter constructor called" << std::endl;
}

Contact::Contact(Contact &other)
{
	std::cout << "[Contact]	Copy constructor called" << std::endl;
	m_first_name = other.m_first_name;
	m_last_name = other.m_last_name;
	m_nickname = other.m_nickname;
	m_darkest_secret = other.m_darkest_secret;
}

Contact::~Contact()
{
	std::cout << "[Contact]	Default destructor called" << std::endl;
}

void Contact::operator=(const Contact &other)
{
	std::cout << "[Contact]	Copy assignment constructor called" << std::endl;
	m_first_name = other.m_first_name;
	m_last_name = other.m_last_name;
	m_nickname = other.m_nickname;
	m_phone_number = other.m_phone_number;
	m_darkest_secret = other.m_darkest_secret;
}

bool Contact::isValid()
{
	return (!m_first_name.empty() && !m_last_name.empty() \
	&& !m_nickname.empty() && !m_phone_number.empty() \
	&& !m_darkest_secret.empty());
}

void Contact::print()
{
	std::string attributes[4] = {m_first_name, m_last_name, m_nickname, m_phone_number};
	for (int i = 0; i < 4; ++i)
	{
		std::cout << std::setw(10);
		if (attributes[i].length() < 10)
			std::cout << attributes[i];
		else
			std::cout << attributes[i].substr(0, 9) + ".";
		std::cout << "|";
	}
	std::cout << std::endl;
}

void Contact::printFull()
{
	std::cout << "First Name :		" << m_first_name << std::endl;
	std::cout << "Last Name :		" << m_last_name << std::endl;
	std::cout << "Nickname :		" << m_nickname << std::endl;
	std::cout << "Phone number :		" << m_phone_number << std::endl;
	std::cout << "Darkest secret :	" << m_darkest_secret << std::endl;
}

void Contact::update()
{
	set_first_name();
	set_last_name();
	set_nickname();
	set_phone_number();
	set_darkest_secret();

}
void Contact::set_first_name()
{
	std::cout << "First Name :	";
	std::getline(std::cin,  m_first_name);
}

void Contact::set_last_name()
{
	std::cout << "Last Name :	";
	std::getline(std::cin, m_last_name);
}

void Contact::set_nickname()
{
	std::cout << "Nickname :	";
	std::getline(std::cin, m_nickname);
}

void Contact::set_phone_number()
{
	std::cout << "Phone Number :	";
	std::getline(std::cin,  m_phone_number);
}

void Contact::set_darkest_secret()
{
	std::cout << "Darkest secret :	";
	std::getline(std::cin, m_darkest_secret);
}
