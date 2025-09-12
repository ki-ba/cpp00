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

Phonebook::PhoneBook()
{
private:
	int		cur_index = 0;
	Contact contacts[8] = {};
public:
	PhoneBook()
	{
		std::cout << "Default constructor called" << std::endl;
	}
	PhoneBook(PhoneBook &other)
	{
		std::cout << "Copy constructor called" << std::endl;
		for (int i = 0; i < 8; ++i)
			this->contacts[i] = other.contacts[i];
	}
	~PhoneBook()
	{
		std::cout << "Default destructor called" << std::endl;
	}
	void operator=(const PhoneBook &other)
	{
		for (int i = 0; i < 8; ++i)
		{
			this->contacts[i] = other.contacts[i];
		}
	}

	void	search(int n)
	{
		if (n >= 8)
			std::cout << "Error : phonebook can only hold 8 contacts." << std::endl;
		if (contacts[n].isValid())
			contacts[n].print();
	}

	void	add(Contact contact)
	{
		if (cur_index == 8)
			cur_index = 0;
		this->contacts[cur_index] = contact;
		++this->cur_index;
	}
	void	printAll()
	{
		for (int i = 0; i < 8; ++i)
			this->contacts[i].print();
	}

};
