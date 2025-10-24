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

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
private:
	int		m_cur_index;
	Contact m_contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void	search(int n) const;
	void	printAll() const;
	int		add();
};

#endif
