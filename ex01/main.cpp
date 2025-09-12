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
int main(void)
{
	std::string action;
	while(action.compare("EXIT") == 0)
	{
		if (action.compare("ADD"))
		{
			Contact c = Contact();
		}
	}
}
