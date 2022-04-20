/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:18:05 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/20 22:24:49 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.class.hpp"

PhoneBook::PhoneBook()
{
	cur_num = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::add_contact(void)
{
	contact[cur_num % PHONEBOOK_SIZE].fill_contact_data();
	cur_num++;
}

void	PhoneBook::search_contact(void)
{
	if (cur_num == 0)
	{
		std::cout << "\n**** Phonebook is EMPTY! ****\n*** Please ADD a Contact ***" << std::endl;
		return ;
	}
	std::cout << "\n|  INDEX   |FIRST NAME|LAST  NAME| NICKNAME |" << std::endl;
	int i = -1;
	while (++i < cur_num && i < PHONEBOOK_SIZE)
		contact[i].print_contact_list(i);
	std::cout << std::endl;
	display_contact_details();
	return ;
}

void	PhoneBook::display_contact_details()
{
	std::string	str;
	int		index;

	std::cout << "\n***** Enter INDEX of the Contact *****\nINDEX: ";
	if (!getline(std::cin, str))
		exit(1);
	try
	{
		index = stoi(str) - 1;
	}
	catch (std::invalid_argument const& ex)
	{
		index = -1;
	}
	if (index < 0 || (index >= cur_num || index > PHONEBOOK_SIZE))
		std::cout << "\n**** Wrong INDEX! ****" << std::endl;
	else
		contact[index].print_contact_details(index + 1);
	std::cout << std::endl;
}
