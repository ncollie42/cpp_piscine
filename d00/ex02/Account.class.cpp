#include "Account.class.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
// int Account::_timesChecked = 0;

Account::Account( void )
{
    _accountIndex = _nbAccounts++;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" 
        << "amount:" << _amount << ";" << "created\n";
}

Account::Account(int initial_deposit )
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" 
        << "amount:" << _amount << ";" << "created\n";
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" 
        << "amount:" << _amount << ";" << "closed\n";
}

int Account::getNbAccounts ( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
        << "total:" << getTotalAmount() << ";"
        << "deposits:" << getNbDeposits() << ";"
        << "widthdrawls:" << getNbWithdrawals() <<  std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "deposits:" << deposit << ";";
    _amount += deposit;
	std::cout << "amount:" << _amount << ";"
		<< "nb_deposits:" << ++_nbDeposits << std::endl;
    _totalNbDeposits++;
    _totalAmount += deposit;
   
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
        << "p_amount:" << _amount << ";"
        << "widthdrawl" ;
    int tmp = _amount - withdrawal;
    if (tmp < 0)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << withdrawal << ";"
        << "amount:" << _amount << ";"
        << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
    return true;
}

int		Account::checkAmount( void ) const
{
    return ∫_amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t t;
    std::tm *now;
    std::time(&t);
    now = std::localtime(&t);
    std::cout << "["
        << (now->tm_year + 1900)
        << (now->tm_mon + 1)
        << (now->tm_mday)
        << "_"
        << (now->tm_hour)
        << (now->tm_min)
        << (now->tm_sec)
        << "]  ";
}