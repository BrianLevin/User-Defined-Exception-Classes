#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
     std::unique_ptr<Account> moes_account; // create two unique pointers
    std::unique_ptr<Account> larrys_account;
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}
