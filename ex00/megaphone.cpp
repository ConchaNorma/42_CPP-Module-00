/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:44:46 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/20 22:17:07 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		argv++;
		while (*argv)
		{
			while (**argv)
				std::cout << (char)toupper(*(*argv)++);
			argv++;
		}
	}
	std::cout << std::endl;
	return 0;
}
