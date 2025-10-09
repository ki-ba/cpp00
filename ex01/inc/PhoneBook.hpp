/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:26:36 by kbarru            #+#    #+#             */
/*   Updated: 2025/09/12 17:43:24 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
class PhoneBook
{
private:
	int		m_cur_index;
	Contact m_contacts[8];
public:
	PhoneBook();
	PhoneBook(PhoneBook &other);
	~PhoneBook();
	void operator=(const PhoneBook &other);
	void	search(int n) const;
	void	printAll() const;
	void	add();

};
