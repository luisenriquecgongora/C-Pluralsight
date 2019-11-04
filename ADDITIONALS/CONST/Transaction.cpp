#include "Transaction.h"
using namespace std;

Transaction::Transaction(int amt, std::string kind):amount(amt),type(kind)
{

}

string Transaction::Report() const
{
    string report = type + " : " + to_string(amount);
    return report;
}
