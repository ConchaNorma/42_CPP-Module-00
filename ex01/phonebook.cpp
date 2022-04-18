/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:44:46 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/18 08:17:50 by cnorma           ###   ########.fr       */
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
	void	set_data()
	{
		cout << "enter First Name: ";
		if (!getline(cin, first_name))
			exit(1);
		cout << "enter Last Name: ";
		if (!getline(cin, last_name))
			exit(1);
		cout << "enter Nickname: ";
		if (!getline(cin, nickname))
			exit(1);
		cout << "enter Phone number: ";
		if (!getline(cin, phone_number))
			exit(1);
		cout << "enter Darkest secret: ";
		if (!getline(cin, darkest_secret))
			exit(1);
		cout << first_name << endl;
		cout << last_name << endl;
		cout << nickname << endl;
		cout << phone_number << endl;
		cout << darkest_secret << endl;
	}

	void	print_word(string str)
	{

	}

	void	ft_search(int i)
	{
		cout << "|  INDEX   |FIRST NAME|LAST NAME| NICKNAME |" << endl;
		cout << "|";
		print_word(i);

		if (first_name.length() > COL_WIDTH)
			cout << first_name.substr(0, COL_WIDTH - 1) << ".|";
		else
		{
			int	len = first_name.length();
			while (len < COL_WIDTH)
			{
				cout << " ";
				len++;
			}
			cout << first_name << "|";
		}
	}
};

class PhoneBook
{
private:
	Contact contact[PHONEBOOK_SIZE];
	int	cur_num;
public:
	PhoneBook(){
		cur_num = 0;
		return ;
	}
	~PhoneBook()
	{
		return ;
	}
	void	ft_add_contact(void)
	{
		//int i = 0;
		contact[cur_num % PHONEBOOK_SIZE].set_data();
		cur_num++;
	}
	void	ft_search_contact(void)
	{
		int i = -1;
		while (++i < cur_num)
			contact[i].ft_search(i);
		cout << "print SEARCH" << endl;
	}
	void	ft_wrong_command(void)
	{
		cout << "print SEARCH" << endl;
	}
};


int	main ()
{
	string		cmd;
	PhoneBook	pb;

	cout << endl << "         *** The PhoneBook is Empty ***" << endl;
	cout << "---Please enter one of the Action: ADD, SEARCH, EXIT ---" << endl << endl;
	cout << "ADD \t- add new contact to the Phonebook" << endl;
	cout << "SEARCH \t- display a list of contacts and info about special contact" << endl;
	cout << "EXIT \t- Quit the Phonebook" << endl;
	cout << "COMMAND:> ";
	while (getline(cin, cmd) && cmd.compare("EXIT"))
	{
		if (!cmd.compare("ADD"))
			pb.ft_add_contact();
		else if (!cmd.compare("SEARCH"))
			pb.ft_search_contact();
		else
			//pb.ft_wrong_command();
		{
			cout << "You entered wrong COMMAND!" << endl;
			//cout << "Please ENTER the Action: ADD or SEARCH or EXIT" << endl;
			//cout << "Action:> ";
		}
		cout << "Please enter next command: ADD, SEARCH or EXIT" << endl;
		cout << "COMMAND:> ";
	}
	cout << "QUIT the Phonebook" << endl;
	return 0;
}
