#include "Account.h"
#include <iostream> 
using namespace std;

Account::Account(void):balance(0)
{
}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is: " + to_string(balance));
    report.push_back("Transactions: ");
    for(auto t:log){
        report.push_back(t.Report());
    }
    report.push_back("---------------");
    return report;
}

void Account::FullReport()
{
    for (auto data:Report()){
        std::cout << data << std::endl;
    }
}

bool Account::Deposit(int amt)
{   
    if(amt>=0){
        balance += amt;
        log.push_back(Transaction(amt, "Deposit"));
        balance -= 1;
        log.push_back(Transaction(amt, "Service Charge"));
        return true;
    }else{
        return false;
    }
}

bool Account::Withdraw(int amt)
{
    if(amt>=0){
        if(balance >= amt){
            balance -= amt;
            log.push_back(Transaction(amt, "Withdraw"));
            balance -= 1;
            log.push_back(Transaction(amt, "Service Charge"));
            return true;
        }else{
            return false;  
        }
    }else{
        return false;
    }
}

// int Account::getBalance(){
//     return balance;
// }