/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:01:47 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/20 08:21:56 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <vector>
# include <algorithm>
# include <functional>
# include <iostream>
# include <fstream>
//# include <string>

int	Account :: _nbAccounts = 0;
int	Account :: _totalAmount = 0;
int	Account :: _totalNbDeposits = 0;
int	Account :: _totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	//Account::_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

void	Account::displayAccountsInfos(void)
{
	//Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
	// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
}

void	Account::displayStatus(void) const
{
	//Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposit:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
//[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
//[19920104_091532] index:2;amount:957;deposits:0;withdrawals:0
//[19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
//[19920104_091532] index:4;amount:1234;deposits:0;withdrawals:0
//[19920104_091532] index:5;amount:0;deposits:0;withdrawals:0
//[19920104_091532] index:6;amount:754;deposits:0;withdrawals:0
//[19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0
	return ;
}

void	Account::makeDeposit(int deposit)
{
	//Account::_displayTimestamp();
	if (deposit > 0)
	{
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
	}
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:";
	std::cout << this->_nbDeposits << std::endl;
	//std::cout << "deposit:" << deposit << std::endl;
//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
//[19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
//[19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
//[19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
//[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
//[19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
//[19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
//[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "withdrawal:" << withdrawal << std::endl;
//[19920104_091532] index:0;p_amount:47;withdrawal:refused
//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
//[19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
//[19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
//[19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
//[19920104_091532] index:5;p_amount:23;withdrawal:refused
//[19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
//[19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1
	return (0);
}

Account::~Account()
{
//[19920104_091532] index:0;amount:47;closed
//[19920104_091532] index:1;amount:785;closed
//[19920104_091532] index:2;amount:864;closed
//[19920104_091532] index:3;amount:430;closed
//[19920104_091532] index:4;amount:1245;closed
//[19920104_091532] index:5;amount:23;closed
//[19920104_091532] index:6;amount:106;closed
//[19920104_091532] index:7;amount:8942;closed
	return ;
}
