/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:29:08 by kbarru            #+#    #+#             */
/*   Updated: 2025/09/12 17:26:24 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	Contact()
	{
		std::cout << "Default constructor called" << std::endl;
		while (this->first_name.empty())
	{
		std::cout << "first name :";
		std::cin >> this->first_name;
	}
	std::cout << "last name :";
	std::cin >> this->last_name;
	std::cout << "nickname:";
	std::cin >> this->nickname;
	std::cout << "phone number:";
	std::cin >> this->phone_number;
	std::cout << "darkest secret:";
	std::cin >> this->darkest_secret;
	}

	Contact(Contact &other)
	{
		std::cout << "Copy constructor called" << std::endl;
		this->first_name = other.first_name;
		this->last_name = other.last_name;
		this->nickname = other.nickname;
		this->darkest_secret = other.darkest_secret;
	}

	~Contact(){}

	void operator=(const Contact &other)
	{
		std::cout << "Copy assignment constructor called" << std::endl;
		this->first_name = other.first_name;
		this->last_name = other.last_name;
		this->nickname = other.nickname;
		this->phone_number = other.phone_number;
		this->darkest_secret = other.darkest_secret;
	}

	bool isValid()
	{
		return (!this->first_name.empty() && !this->last_name.empty() \
		&& !this->nickname.empty() && !this->phone_number.empty() \
		&& !this->darkest_secret.empty());
	}
	void print()
	{
		std::cout << "soon" << std::endl;
	}
};

