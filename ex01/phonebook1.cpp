/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:44:46 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/18 21:46:13 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

using namespace std;

class Contact
{
private:
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;
public:
	void	fill_contact_data()
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

	void	print_index(int index)
	{
		int	i = -1;
		while (++i < COL_WIDTH - 1)
			cout << " ";
		cout << index + 1 << "|";
	}

	void	print_word(string str)
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

	void	print_contact_list(int i)
	{
		//cout << endl;
		cout << "|";
		print_index(i);
		print_word(first_name);
		print_word(last_name);
		print_word(nickname);
		cout << endl;
	}

	void	print_contact_details(int i)
	{
		cout << "\n***** The CARD of the Contact #" << i << "  *****" << endl;
		cout << "First Name: \t" << first_name << endl;
		cout << "Last Name: \t" << last_name << endl;
		cout << "Nickname: \t" << nickname << endl;
		cout << "Phone Number: \t" << phone_number << endl;
		cout << "Darkest secret: " << darkest_secret << endl;
	}

	//void	ft_search(int i)
	//{
	//	print_contact_list(i);
	//}
};

class PhoneBook
{
private:
	Contact contact[PHONEBOOK_SIZE];
	int	cur_num;
public:
	PhoneBook()
	{
		cur_num = 0;
		return ;
	}
	~PhoneBook()
	{
		return ;
	}
	void	add_contact(void)
	{
		contact[cur_num % PHONEBOOK_SIZE].fill_contact_data();
		cur_num++;
	}
	void	search_contact(void)
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

	void	display_contact_details()
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
};


int	main ()
{
	string		cmd;
	PhoneBook	pb;

	cout << endl << "         *** The PhoneBook is Empty ***" << endl;
	cout << "--- Please enter one of the COMMAND: ADD, SEARCH, EXIT ---" << endl << endl;
	cout << "ADD \t- add new contact to the Phonebook" << endl;
	cout << "SEARCH \t- display a list of contacts and info about special contact" << endl;
	cout << "EXIT \t- Quit the Phonebook" << endl;
	cout << endl << "COMMAND:> ";
	while (getline(cin, cmd) && cmd.compare("EXIT"))
	{
		if (!cmd.compare("ADD"))
			pb.add_contact();
		else if (!cmd.compare("SEARCH"))
			pb.search_contact();
		else
			cout << "You entered wrong COMMAND!" << endl;
		cout << endl << "Please enter next command: ADD, SEARCH or EXIT" << endl;
		cout << endl << "COMMAND:> ";
	}
	cout << "\nQUIT the Phonebook\n" << endl;
	return 0;
}
