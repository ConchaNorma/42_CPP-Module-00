/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:18:05 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/18 22:26:05 by cnorma           ###   ########.fr       */
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
		cout << "\n**** Phonebook is EMPTY! ****\n*** Please ADD a Contact ***" << endl;
		return ;
	}
	cout << "\n|  INDEX   |FIRST NAME|LAST  NAME| NICKNAME |" << endl;
	int i = -1;
	while (++i < cur_num && i < PHONEBOOK_SIZE)
		contact[i].print_contact_list(i);
	cout << endl;
	display_contact_details();
	return ;
}

void	PhoneBook::display_contact_details()
{
	string	str;
	int		index;

	cout << "\n***** Enter INDEX of the Contact *****\nINDEX: ";
	if (!getline(cin, str))
		exit(1);
	try
	{
		index = stoi(str) - 1;
	}
	catch (invalid_argument const& ex)
	{
		index = -1;
	}
	if (index < 0 || (index >= cur_num || index > PHONEBOOK_SIZE))
		cout << "\n**** Wrong INDEX! ****" << endl;
	else
		contact[index].print_contact_details(index + 1);
	cout << endl;
}
