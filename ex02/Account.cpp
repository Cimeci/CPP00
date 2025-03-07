/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:38:37 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/07 09:29:23 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals= 0;

int Account::getNbAccounts(){
	return (_nbAccounts);
}

int Account::getTotalAmount(){
	return (_totalAmount);
}

int Account::getNbDeposits(){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(){
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp() {
    std::time_t now = std::time(0);
    std::tm *ltm = std::localtime(&now);

	//[AAAAMMJJ_HHMMSS]
    std::cout << "["
              << std::setfill('0') << std::setw(4) << 1900 + ltm->tm_year
              << std::setw(2) << 1 + ltm->tm_mon
              << std::setw(2) << ltm->tm_mday << "_"
              << std::setw(2) << ltm->tm_hour
              << std::setw(2) << ltm->tm_min
              << std::setw(2) << ltm->tm_sec
              << "] ";
}

// [19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6

void Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "account:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals
			<< std::endl;
}

// [19920104_091532] index:0;amount:42;created

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

// [19920104_091532] index:0;amount:47;closed

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

void    Account::makeDeposit( int deposit ){
	_nbDeposits = 1;
	_totalNbDeposits++;
	int p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << p_amount
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
}

// [19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
// [19920104_091532] index:5;p_amount:23;withdrawal:refused

bool    Account::makeWithdrawal( int withdrawal ){
	int p_amount = _amount;
	int check_amount = _amount - withdrawal;
	if (check_amount < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:" << "refused"
				<< std::endl;
		return (false);
	}
	_nbWithdrawals = 1;
	_totalNbWithdrawals++;
	_amount = check_amount;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawal:" << _nbWithdrawals
			<< std::endl;

	return (true);
}

int		Account::checkAmount( void ) const{
	return (_amount);
}

// [19920104_091532] index:1;amount:819;deposits:1;withdrawals:0

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposit:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl;
}