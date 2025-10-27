/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:41:14 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/27 09:41:34 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{

	_displayTimestamp();
	_totalAmount += this->_amount;
	std::cout << "index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";created"<<std::endl;
	++_nbAccounts;
}

Account::~Account()
{
	_displayTimestamp();
	--_nbAccounts;
	std::cout << "index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";closed"<<std::endl;
	_totalAmount -= this->_amount;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout <<"accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
	
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	_displayTimestamp();
	std::cout << "index:"<<this->_accountIndex<<";p_amount:"<<this->_amount - deposit<<";deposit:"<<deposit<<";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << "index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:refused"<<std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	std::cout << "index:"<<this->_accountIndex<<";p_amount:"<<this->_amount + withdrawal<<";withdrawal:"<<withdrawal<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::_displayTimestamp()
{
	char buffer[16];
	time_t timestamp = time(&timestamp);
	struct tm *dt = localtime(&timestamp);

	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", dt);
	std::cout << "["<< buffer << "] ";
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}
