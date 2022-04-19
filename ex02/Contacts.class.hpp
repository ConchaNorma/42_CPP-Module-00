/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:03:45 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/18 22:18:35 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

# include <iostream>
# include <string>

using namespace std;

class Contacts
{
private:
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;

public:
	void	fill_contact_data();
	void	print_index(int index);
	void	print_word(string str);
	void	print_contact_list(int i);
	void	print_contact_details(int i);
};

#endif
