#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
        if (balance < 0.0)
            throw IllegalBalanceException(); // negative = illegal balence exception
}

bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true; // illegal balence exception
    }
}

bool Account::withdraw(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false; // insuffienct funds exception
}

 void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}