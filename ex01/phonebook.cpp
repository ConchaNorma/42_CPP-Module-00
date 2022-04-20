/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:44:46 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/20 22:23:55 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include "Phonebook.class.hpp"

int	main ()
{
	std::string		cmd;
	PhoneBook	pb;

	std::cout << std::endl << "         *** The PhoneBook is Empty ***" << std::endl;
	std::cout << "--- Please enter one of the COMMAND: ADD, SEARCH, EXIT ---" << std::endl << std::endl;
	std::cout << "ADD \t- add new contact to the Phonebook" << std::endl;
	std::cout << "SEARCH \t- display a list of contacts and info about special contact" << std::endl;
	std::cout << "EXIT \t- Quit the Phonebook" << std::endl;
	std::cout << std::endl << "COMMAND:> ";
	while (getline(std::cin, cmd) && cmd.compare("EXIT"))
	{
		if (!cmd.compare("ADD"))
			pb.add_contact();
		else if (!cmd.compare("SEARCH"))
			pb.search_contact();
		else
			std::cout << "You entered wrong COMMAND!" << std::endl;
		std::cout << std::endl << "Please enter next command: ADD, SEARCH or EXIT" << std::endl;
		std::cout << std::endl << "COMMAND:> ";
	}
	std::cout << "\nQUIT the Phonebook\n" << std::endl;
	return 0;
}
