/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:01:47 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/20 21:53:18 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <fstream>
# include <ctime>

int	Account :: _nbAccounts = 0;
int	Account :: _totalAmount = 0;
int	Account :: _totalNbDeposits = 0;
int	Account :: _totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	std::cout << "index:" << "\033[34m" << this->_accountIndex << "\033[0m";
	std::cout << ";amount:" << "\033[34m" << this->_amount << "\033[0m" << ";created\n";
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << "\033[34m" << this->_accountIndex << "\033[0m";
	std::cout << ";amount:" << "\033[34m" << this->_amount << "\033[0m" << ";closed" << std::endl;
}

int	Account::getNbAccounts(void){return (_nbAccounts); }
int	Account::getTotalAmount(void){return _totalAmount;}
int	Account::getNbDeposits(void){return _totalNbDeposits;}
int	Account::getNbWithdrawals(void){return _totalNbWithdrawals;}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << "\033[34m" << Account::_nbAccounts << "\033[0m";
	std::cout << ";total:" << "\033[34m" << Account::_totalAmount << "\033[0m";
	std::cout << ";deposits:" << "\033[34m" << Account::_totalNbDeposits << "\033[0m";
	std::cout << ";withdrawals:" << "\033[34m" << Account::_totalNbWithdrawals << "\033[0m" << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << "\033[34m" << this->_accountIndex << "\033[0m";
	std::cout << ";amount:" << "\033[34m" << this->_amount << "\033[0m";
	std::cout << ";deposits:" << "\033[34m" << this->_nbDeposits << "\033[0m";
	std::cout << ";withdrawals:" << "\033[34m" << this->_nbWithdrawals << "\033[0m" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	if (deposit > 0)
	{
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
	}
	std::cout << "index:" << "\033[34m" << this->_accountIndex << "\033[0m";
	std::cout << ";p_amount:" << "\033[34m" << this->_amount << "\033[0m";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";deposit:" << "\033[34m" << deposit << "\033[0m";
	std::cout << ";amount:" << "\033[34m" << this->_amount << "\033[0m";
	std::cout << ";nb_deposits:" << "\033[34m" << this->_nbDeposits << "\033[0m" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << "\033[34m" << this->_accountIndex << "\033[0m";
	std::cout << ";p_amount:" << "\033[34m" << this->_amount << "\033[0m";
	if (withdrawal > this->_amount)
		std::cout << ";withdrawal:refused\n";
	else
	{
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << "\033[34m" << withdrawal << "\033[0m" << ";amount:" << "\033[34m" << this->_amount << "\033[0m";
		std::cout << ";nb_withdrawals:" << "\033[34m" << this->_nbWithdrawals << "\033[0m" << std::endl;
	}
	return (1);
}

void	Account::_displayTimestamp(void)
{
	static std::time_t time_now = std::time(nullptr);
	std::cout << "[" << std::put_time(std::localtime(&time_now), "%Y%m%d_%OH%OM%OS") << "] ";
}
