/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:31:48 by kbarru            #+#    #+#             */
/*   Updated: 2025/09/12 16:19:50 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string.h>
#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	while (argv[i])
	{
	   std::string str = argv[i];

		for (size_t i = 0; i < str.length(); ++i)
			str[i] = std::toupper(str[i]);

		std::cout << str;
		++i;
	}
	std::cout << std::endl;
}
