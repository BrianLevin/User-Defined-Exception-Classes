#include <iostream>
#include <memory> // manages dynamic memory
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
     std::unique_ptr<Account> moes_account; // create two unique pointers
    std::unique_ptr<Account> larrys_account;
     try {
        larrys_account = std::make_unique<Savings_Account>("Larry", -2000.0);
        std::cout << *larrys_account << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}
