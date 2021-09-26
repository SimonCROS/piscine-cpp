#include "Account.hpp"
#include <iostream>
#include <iomanip>

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created"
		<< std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed"
		<< std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

int Account::getNbAccounts()
{
	return Account::_nbAccounts;
}

void Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout
		<< "accounts:" << Account::_nbAccounts
		<< ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals
		<< std::endl;
}

void Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount;

	this->_nbDeposits++;
	this->_amount += deposit;

	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;

	std::cout
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount;

	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;

	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;

	std::cout
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals
		<< std::endl;

	return true;
}

int Account::checkAmount( void ) const {
	return this->_amount;
}

void Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void Account::_displayTimestamp( void ) {
    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);

	std::cout << std::put_time(&tm, "[%Y%m%d_%H%M%S] ");
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
