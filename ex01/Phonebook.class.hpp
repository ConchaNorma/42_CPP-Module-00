/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:18:11 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/18 22:30:02 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contacts.class.hpp"
# include "phonebook.hpp"

//# include <iostream>
//# include <string>

//using namespace std;

//const int PHONEBOOK_SIZE = 8;
//const int COL_WIDTH = 10;

class PhoneBook
{
private:
	Contacts contact[PHONEBOOK_SIZE];
	int	cur_num;
public:
	PhoneBook();
	~PhoneBook();
	void	add_contact(void);
	void	search_contact(void);
	void	display_contact_details();
};

#endif
