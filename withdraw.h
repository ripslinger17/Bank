//
// Created by Smit Patel on 05/08/23.
//

#ifndef BANK_WITHDRAW_H
#define BANK_WITHDRAW_H
#include <iostream>
#include "balance.h"

void performWithdraw(){
    std::cout << "Enter amount you want to withdraw.\nAmount: ";
    std::cin >> amount;
    balance -= amount;
    std::cout << "Current Balance: " << balance << std::endl;
    std::cout << "\n";
}

#endif //BANK_WITHDRAW_H
