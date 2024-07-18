#include <iostream>
#include "Account.h"

int main() 
{
    Account acc1(1000);
    Account acc2(500);
    
    acc1.displayStatus();
    acc2.displayStatus();

    
    acc1.makeDeposit(200);
    acc2.makeDeposit(100);

    
    acc1.makeWithdrawal(500);
    acc2.makeWithdrawal(700); 
    
    acc1.displayStatus();
    acc2.displayStatus();

    
    Account::displayAccountsInfos();

    return 0;
}
