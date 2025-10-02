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

#pragma once

#include <string>
#include <iostream>

class Contact
{
private:
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_darkest_secret;
public:
	Contact();
	Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	Contact(Contact &other);
	~Contact();
	void operator=(const Contact &other);
	bool isValid();
	void print();
	void printFull();

	// Setters

	int update();
	void set_first_name();
	void set_last_name();
	void set_nickname();
	void set_phone_number();
	void set_darkest_secret();

};

