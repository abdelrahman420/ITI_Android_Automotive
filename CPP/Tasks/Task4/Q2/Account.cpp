#include <iostream>
#include <ctime>
#include "Account.h"


int Account::m_noOfAccounts = 0;
int Account::m_totalAmount = 0;
int Account::m_totalNbDeposits = 0;
int Account::m_totalNbWithdrawals = 0;
int Account::getNoOfAccounts(void)
{
    return m_noOfAccounts;
}
int Account::getTotalAmount(void)
{
    return m_totalAmount;
}
int Account::getNbDeposits(void)
{
    return m_totalNbDeposits;
}
int Account::getNoOfWithdrawals(void)
{
    return m_totalNbWithdrawals;
}
void Account::displayAccountsInfos(void)
{
    std::cout<<"the number of accounts is "<<getNoOfAccounts()<<std::endl<<"the total amount of deposits is "<<getNbDeposits()<<std::endl<<"the total amount of withdrawals is "<<getNoOfWithdrawals()<<std::endl<<"the total amount of all accounts "<<getTotalAmount()<<std::endl;
}
Account::Account(int initial_deposit): m_accountIndex(m_noOfAccounts), m_amount(initial_deposit), m_noOfDeposits(0), m_noOfWithdrawals(0) 
{
    m_displayTimestamp();
    ++m_noOfAccounts;
    m_totalAmount += initial_deposit;
    std::cout << " index:" << m_accountIndex << ";amount:" << m_amount << ";created" << std::endl;
}
Account::~Account(void)
{
    m_displayTimestamp();
    std::cout << " index:" << m_accountIndex << ";amount:" << m_amount << ";closed" << std::endl;
}
void Account::makeDeposit(int deposit)
{
    m_displayTimestamp();
    std::cout << " index:" << m_accountIndex << ";p_amount:" << m_amount << ";deposit:" << deposit << ";";
    m_amount += deposit;
    ++m_noOfDeposits;
    m_totalAmount += deposit;
    ++m_totalNbDeposits;
    std::cout << "amount:" << m_amount << ";nb_deposits:" << m_noOfDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    m_displayTimestamp();
    std::cout << " index:" << m_accountIndex << ";p_amount:" << m_amount << ";withdrawal:";
    if (m_amount < withdrawal) {
        std::cout << "refused" << std::endl;
        return false;
    }
    m_amount -= withdrawal;
    ++m_noOfWithdrawals;
    m_totalAmount -= withdrawal;
    ++m_totalNbWithdrawals;
    std::cout << withdrawal << ";amount:" << m_amount << ";nb_withdrawals:" << m_noOfWithdrawals << std::endl;
    return true;

}
int Account::checkAmount(void) const
{
    return m_amount;
}
void Account::displayStatus(void) const
{
    m_displayTimestamp();
    std::cout << " index:" << m_accountIndex << ";amount:" << m_amount << ";deposits:" << m_noOfDeposits << ";withdrawals:" << m_noOfWithdrawals << std::endl;
}

void Account::m_displayTimestamp(void)
{
    std::time_t now = std::time(nullptr);
    std::tm *ltm = std::localtime(&now);
    std::cout << "[" << 1900 + ltm->tm_year << "-"<< 1 + ltm->tm_mon << "-"<< ltm->tm_mday << "_"<< 1 + ltm->tm_hour << ":"<< 1 + ltm->tm_min << ":"<< 1 + ltm->tm_sec << "]";
}
Account::Account(void)
{
    m_displayTimestamp();
    std::cout << " index:" << m_accountIndex << ";amount:" << m_amount << ";created" << std::endl;
}
