/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 17:33:48 by kbarru            #+#    #+#             */
/*   Updated: 2025/09/12 17:39:29 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"
int main(void)
{
	PhoneBook book;
	std::string action = "";
	while(action.compare("EXIT"))
	{
		std::cout << "Choose an action : ";
		std::getline(std::cin, action);
		if (action.compare("ADD") == 0)
		{
			book.add();
			continue;
		}
		else if (action.compare("SEARCH") == 0)
		{
			std::string number;
			book.printAll();
			std::cout << "# of contact to look : ";
			std::getline(std::cin, number);
			book.search(std::stoi(number));
			continue;
		}
		else if (action.compare("EXIT"))
		{
			std::cout << "Incorrect action. (ADD / SEARCH / EXIT) : "; 
		}
	}
}
