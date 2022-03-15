/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:50:56 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/15 17:29:28 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// Init all the start-values
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Empty constuctor, when called without input
Account::Account() {}

// Constructor with init deposit
// after the creation a note about the created account is printed
Account::Account(int initial_deposit)
{
// Init all the start-values of each account
// and keep track of the number of accounts as well as the total ammount of money
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;

// Printing note of the creation of the Account with its starting values and the state created
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"created" <<
	std::endl;
}

// destructor that prints all the ending values as well as the state closed
Account::~Account(void)
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"closed" <<
	std::endl;
}

// getter for the total number of accounts
int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

// getter for the total amoount of money of all accounts
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

// getter for the total number of deposits
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

// getter for the total number of withdrawals
int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

// getter to display all the accounts infos
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout <<
	"accounts:" << getNbAccounts() << ";" <<
	"total:" << getTotalAmount() << ";" <<
	"deposits:" << getNbDeposits() << ";" <<
	"withdrawals:" << getNbWithdrawals() <<
	std::endl;
}

// makes a deposit
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";" <<
	"deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout <<
	"amount:" << this->checkAmount() << ";" <<
	"nb_deposits:" << this->_nbDeposits <<
	std::endl;
}

// makes a withdraw, returns true if successfull, false if not
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";";
	if (this->checkAmount() < withdrawal)
	{
		std::cout <<
		"withdrawal:refused" <<
		std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout <<
		"withdrawal:" << withdrawal << ";" <<
		"amount:" << this->checkAmount() << ";" <<
		"nb_withdrawals:" << this->_nbWithdrawals <<
		std::endl;
		return (true);
	}
}

// returns the amount of money of the account
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

// displays the whole status of an account
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"deposits:" << this->_nbDeposits << ";" <<
	"withdrawals:" << this->_nbWithdrawals <<
	std::endl;
}

// displays the timestamp in the correct format
void	Account::_displayTimestamp( void )
{
	time_t now = std::time(NULL);
	struct tm timenow = *std::localtime(&now);

	std::cout << "[" << timenow.tm_year + 1900 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mon + 1 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mday << "_" <<
	std::setfill('0') << std::setw(2) << timenow.tm_hour <<
	std::setfill('0') << std::setw(2) << timenow.tm_min <<
	std::setfill('0') << std::setw(2) << timenow.tm_sec <<
	"] ";
	// insert this line below instead of the above and then run 'make re && ./leak_information >my.log && diff my.log 19920104_091532.log'
	// std::cout << "[19920104_091532] ";
}
