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
	std::cout << "[PhoneBook]	Default constructor called" << std::endl;
	m_cur_index = 0;
}
PhoneBook::PhoneBook(PhoneBook &other)
{
	std::cout << "[PhoneBook]	Copy constructor called" << std::endl;
	for (int i = 0; i < 8; ++i)
		m_contacts[i] = other.m_contacts[i];
}
PhoneBook::~PhoneBook()
{
	std::cout << "[PhoneBook]	Default destructor called" << std::endl;
}
void PhoneBook::operator=(const PhoneBook &other)
{
	std::cout << "[PhoneBook]	Copy assignment operator called" << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		m_contacts[i] = other.m_contacts[i];
	}
}

void	PhoneBook::search(int n)
{
	
	if (n >= 8)
		std::cout << "Error : phonebook can only hold 8 contacts." << std::endl;
	else if (m_contacts[n].isValid() == 0)
			std::cout << "Error : no contact with that number." << std::endl;
	else
		m_contacts[n].printFull();
}

void	PhoneBook::add()
{
	if (m_cur_index == 8)
	{
		std::cout << "Warning : Max # of contact reached. Erasing oldest one." << std::endl;
		m_cur_index = 0;
	}
	Contact c;
	c.update();
	m_contacts[m_cur_index] = c;
	++m_cur_index;
}
void	PhoneBook::printAll()
{
	std::cout << std::setw(10) << "FIRST NAME" << "|"
		<< std::setw(10) << "LAST NAME" << "|"
		<< std::setw(10) << "NICKNAME" << "|"
		<< std::setw(10) << "PHONE #" << std::endl;

	for (int i = 0; i < 8; ++i)
		m_contacts[i].print();
}


