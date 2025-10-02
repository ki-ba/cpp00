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
#include <sstream>
#include "PhoneBook.hpp"
int main(void)
{
	PhoneBook book;
	std::string action = "";
	while(action != "EXIT")
	{
		std::cout << "Choose an action : ";
		std::getline(std::cin, action);
		if(std::cin.eof())
			return (0);
		if (action == "ADD")
		{
			book.add();
			if(std::cin.eof())
				return (1);
			continue;
		}
		else if (action == "SEARCH")
		{
			std::string number;
			int n;
			book.printAll();
			std::cout << "# of contact to look : ";
			std::getline(std::cin, number);
			if(std::cin.eof())
				return (1);
			else if(number.find_first_of("0123456789") == std::string::npos || number.length() != 1)
					std::cout << "Error : incorrect input" << std::endl;
			else
			{
			std::istringstream	temp(number);
			temp >> n;
			book.search(n);
			continue;
			}
		}
		else if (action != "EXIT")
		{
			std::cout << "Incorrect action. (ADD / SEARCH / EXIT) : " << std::endl;
		}
	}
}
