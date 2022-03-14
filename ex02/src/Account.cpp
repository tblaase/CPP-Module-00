/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:50:56 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/14 19:54:48 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

// Init all the start-values
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Empty constuctor, when called without input
Account::Account() {}

// Constructor with init deposit //find out what the other shit is !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// after the creation a note about the created account is printed
Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0)
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
	"index:" << getNbAccounts << ";" <<
	"amount:" << getNbDeposits << ";" <<
	"created" <<
	std::endl;
}

// destructor that prints all the ending values as well as the state closed
Account::~Account(void)
{
	_displayTimestamp();
	std::cout <<
	"index:" << getNbAccounts << ";" <<
	"amount:" << getNbDeposits << ";" <<
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
	"accounts:" << Account::_nbAccounts << ";" <<
	"total:" << Account::_totalAmount << ";" <<
	"deposits:" << Account::_totalNbDeposits << ";" <<
	"withdrawals" << Account::_totalNbWithdrawals <<
	std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_amount -= withdrawal;
}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{

}