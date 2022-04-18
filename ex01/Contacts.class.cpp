/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:05:10 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/18 22:34:56 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contacts.class.hpp"
# include "phonebook.hpp"

using namespace std;

 void	Contacts::fill_contact_data()
{
	cout << endl;
	cout << "Enter Contact's First Name: \t";
	if (!getline(cin, first_name))
		exit(1);
	cout << "Enter Contact's Last Name: \t";
	if (!getline(cin, last_name))
		exit(1);
	cout << "Enter Contact's Nickname: \t";
	if (!getline(cin, nickname))
		exit(1);
	cout << "Enter Contact's Phone number: \t";
	if (!getline(cin, phone_number))
		exit(1);
	cout << "Enter Contact's Darkest secret: ";
	if (!getline(cin, darkest_secret))
		exit(1);
	cout << endl;
}

void	Contacts::print_index(int index)
{
	int	i = -1;
	while (++i < COL_WIDTH - 1)
		cout << " ";
	cout << index + 1 << "|";
}

void	Contacts::print_word(string str)
{
	if (str.length() > COL_WIDTH)
		cout << str.substr(0, COL_WIDTH - 1) << ".|";
	else
	{
		int	len = str.length();
		while (len < COL_WIDTH)
		{
			cout << " ";
			len++;
		}
		cout << str << "|";
	}
}

void	Contacts::print_contact_list(int i)
{
	cout << "|";
	print_index(i);
	print_word(first_name);
	print_word(last_name);
	print_word(nickname);
	cout << endl;
}

void	Contacts::print_contact_details(int i)
{
	cout << "\n***** The CARD of the Contact #" << i << "  *****" << endl;
	cout << "First Name: \t" << first_name << endl;
	cout << "Last Name: \t" << last_name << endl;
	cout << "Nickname: \t" << nickname << endl;
	cout << "Phone Number: \t" << phone_number << endl;
	cout << "Darkest secret: " << darkest_secret << endl;
}
