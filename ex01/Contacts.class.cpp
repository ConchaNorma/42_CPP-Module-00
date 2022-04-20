/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:05:10 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/20 22:25:56 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contacts.class.hpp"
# include "phonebook.hpp"

 void	Contacts::fill_contact_data()
{
	std::cout << std::endl;
	std::cout << "Enter Contact's First Name: \t";
	if (!getline(std::cin, first_name))
		exit(1);
	std::cout << "Enter Contact's Last Name: \t";
	if (!getline(std::cin, last_name))
		exit(1);
	std::cout << "Enter Contact's Nickname: \t";
	if (!getline(std::cin, nickname))
		exit(1);
	std::cout << "Enter Contact's Phone number: \t";
	if (!getline(std::cin, phone_number))
		exit(1);
	std::cout << "Enter Contact's Darkest secret: ";
	if (!getline(std::cin, darkest_secret))
		exit(1);
	std::cout << std::endl;
}

void	Contacts::print_index(int index)
{
	int	i = -1;
	while (++i < COL_WIDTH - 1)
		std::cout << " ";
	std::cout << index + 1 << "|";
}

void	Contacts::print_word(std::string str)
{
	if (str.length() > COL_WIDTH)
		std::cout << str.substr(0, COL_WIDTH - 1) << ".|";
	else
	{
		int	len = str.length();
		while (len < COL_WIDTH)
		{
			std::cout << " ";
			len++;
		}
		std::cout << str << "|";
	}
}

void	Contacts::print_contact_list(int i)
{
	std::cout << "|";
	print_index(i);
	print_word(first_name);
	print_word(last_name);
	print_word(nickname);
	std::cout << std::endl;
}

void	Contacts::print_contact_details(int i)
{
	std::cout << "\n***** The CARD of the Contact #" << i << "  *****" << std::endl;
	std::cout << "First Name: \t" << first_name << std::endl;
	std::cout << "Last Name: \t" << last_name << std::endl;
	std::cout << "Nickname: \t" << nickname << std::endl;
	std::cout << "Phone Number: \t" << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}
