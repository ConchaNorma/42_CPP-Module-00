/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:44:46 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/12 21:38:52 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int	main ()
{
	//int	val = 2;
	//int	*p1 = &val;
	//int	*p2;

	//p2 = &val;
	//cout << *p1 << " - " << *p2 << endl;
	//cin >> *p2;
	char	*qw = new char[50];
	getline(cin, qw);
	cout << qw << endl;
	//cout << *p1 << " - " << *p2 << endl;
	//cin.get();
	return 0;
}
