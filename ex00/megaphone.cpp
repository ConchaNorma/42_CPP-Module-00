/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:44:46 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/13 20:55:39 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main (int argc, char **argv)
{
	if (argc < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		argv++;
		while (*argv)
		{
			while (**argv)
				cout << (char)toupper(*(*argv)++);
			argv++;
		}
	}
	cout << endl;
	return 0;
}
