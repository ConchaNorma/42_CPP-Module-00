/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:01:47 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/19 22:26:52 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <vector>
# include <algorithm>
# include <functional>
# include <iostream>
# include <fstream>
//# include <string>

Account::Account()
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	return ;
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	return ;
}

Account::~Account()
{
	return ;
}

int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size );
	accounts_t::iterator	acc_begin;//	= accounts.begin();
	accounts_t::iterator	acc_end;//		= accounts.end();

	int	i = -1;
	while (*accounts[++i])
		std::cout << accounts[i];

	//int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	//size_t const		d_size( sizeof(d) / sizeof(int) );
	//ints_t				deposits( d, d + d_size );
	//ints_t::iterator	dep_begin	= deposits.begin();
	//ints_t::iterator	dep_end		= deposits.end();

	//for(acc_begin = accounts.begin(); acc_begin < accounts.end() - 1; ++acc_begin)
	//{
	//	//std::cout << " - " << std::endl;
	//	//std::cout <<
	//	std::cout << *acc_begin << std::endl;
		//(*(it.first)).makeDeposit( *(it.second) );
	//}

	//int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	//size_t const		w_size( sizeof(w) / sizeof(int) );
	//ints_t				withdrawals( w, w + w_size );
	//ints_t::iterator	wit_begin	= withdrawals.begin();
	//ints_t::iterator	wit_end		= withdrawals.end();

	//Account::displayAccountsInfos();
	//std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	//for ( acc_int_t it( acc_begin, dep_begin );
	//	  it.first != acc_end && it.second != dep_end;
	//	  ++(it.first), ++(it.second) ) {

	//	(*(it.first)).makeDeposit( *(it.second) );
	//}

	//Account::displayAccountsInfos();
	//std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	//for ( acc_int_t it( acc_begin, wit_begin );
	//	  it.first != acc_end && it.second != wit_end;
	//	  ++(it.first), ++(it.second) ) {

	//	(*(it.first)).makeWithdrawal( *(it.second) );
	//}

	//Account::displayAccountsInfos();
	//std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}
