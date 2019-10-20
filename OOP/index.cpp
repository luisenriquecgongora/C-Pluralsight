#include <iostream>
#include "Account.h"

using namespace std;

int main()
{   
    vector <string> report;
    Account a1;
    a1.Deposit(90);
    a1.FullReport();
    a1.Withdraw(50);
    a1.FullReport();
    cout << a1.getBalance() <<endl;

}