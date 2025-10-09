/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 17:47:39 by kbarru            #+#    #+#             */
/*   Updated: 2025/09/12 17:50:51 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	this->m_cur_index = 0;
}
PhoneBook::PhoneBook(PhoneBook &other)
{
	this->m_cur_index = other.m_cur_index;
	for (int i = 0; i < 8; ++i)
		this->m_contacts[i] = other.m_contacts[i];
}
PhoneBook::~PhoneBook()
{
}
void PhoneBook::operator=(const PhoneBook &other)
{
	this->m_cur_index = other.m_cur_index;
	for (int i = 0; i < 8; ++i)
		this->m_contacts[i] = other.m_contacts[i];
}

void	PhoneBook::search(int n) const
{
	
	if (n < 1 || n > 9)
		std::cout << "Error : phonebook can only hold 8 contacts. (1-9)" << std::endl;
	else if (this->m_contacts[n - 1].isValid() == 0)
			std::cout << "Error : no contact with that number." << std::endl;
	else
		this->m_contacts[n - 1].printFull();
}

void	PhoneBook::add()
{
	Contact c;
	std::string newValue;
	if (this->m_cur_index == 8)
	{
		std::cout << "Warning : Max # of contact reached. Now erasing oldest ones." << std::endl;
		this->m_cur_index = 0;
	}

	std::cout << "First Name :		";
	std::getline(std::cin, newValue);
	if (std::cin.eof())
		return ;
	c.setFirstName(newValue);
	
	std::cout << "Last Name :		";
	std::getline(std::cin, newValue);
	if (std::cin.eof())
		return ;
	c.setLastName(newValue);

	std::cout << "Nickname :		";
	std::getline(std::cin, newValue);
	if (std::cin.eof())
		return ;
	c.setNickname(newValue);
	
	std::cout << "Phone Number :		";
	std::getline(std::cin, newValue);
	if (std::cin.eof())
		return ;
	c.setPhoneNumber(newValue);
	
	std::cout << "Darkest secret :	";
	std::getline(std::cin, newValue);
	if (std::cin.eof())
		return ;
	c.setDarkestSecret(newValue);

	if (c.isValid())
	{
		this->m_contacts[this->m_cur_index] = c;
		++this->m_cur_index;
	}
	else
		std::cout << "Error : incorrect field[s] in contact" << std::endl;
}
void	PhoneBook::printAll() const
{
	std::cout << std::setw(10) << "FIRST NAME" << "|"
		<< std::setw(10) << "LAST NAME" << "|"
		<< std::setw(10) << "NICKNAME" << "|"
		<< std::setw(10) << "PHONE #" << std::endl;

	for (int i = 0; i < 8; ++i)
		this->m_contacts[i].print();
}


