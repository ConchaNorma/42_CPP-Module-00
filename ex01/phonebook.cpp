/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:44:46 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/18 22:31:25 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include "Phonebook.class.hpp"

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
