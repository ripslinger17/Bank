//
// Created by Smit Patel on 05/08/23.
//

#ifndef BANK_DEPOSIT_H
#define BANK_DEPOSIT_H
#include <iostream>
#include "balance.h"

void performDeposit(){
    std::cout << "Enter amount you want to deposit.\nAmount: ";
    std::cin >> amount;
    balance += amount;
    std::cout << "Current Balance: " << balance << std::endl;
    std::cout << "\n";
}

#endif //BANK_DEPOSIT_H
