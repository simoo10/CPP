#include "Account.hpp"
#include <ctime>
#include <iostream>
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}
void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";deposits:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}
int Account ::getNbAccounts(void)
{
	return (_nbAccounts);
}
int Account::getTotalAmount()
{
	return (_totalAmount);
}
int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}
int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}
void Account::_displayTimestamp()
{
	time_t	ti;
	tm		*timer;

	ti = time(0);
	timer = localtime(&ti);
	std::cout << "[";
	std::cout << timer->tm_year + 1900;
	if (timer->tm_mon < 10)
		std::cout << "0" << timer->tm_mon + 1;
	else
		std::cout << timer->tm_mon + 1;
	if (timer->tm_mday < 10)
		std::cout << "0" << timer->tm_mday;
	else
		std::cout << timer->tm_mday;
	std::cout << "_";
	if (timer->tm_hour < 10)
		std::cout << "0" << timer->tm_hour;
	else
		std::cout << timer->tm_hour;
	if (timer->tm_min < 10)
		std::cout << "0" << timer->tm_min;
	else
		std::cout << timer->tm_min;
	if (timer->tm_sec < 10)
		std::cout << "0" << timer->tm_sec;
	else
		std::cout << timer->tm_sec;
	std::cout << "]";
}
