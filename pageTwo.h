/*
    Created by Smit Patel on 05/08/23.
    Page 2
    Balance Withdraw Deposit Page
*/

#ifndef BANK_PAGETWO_H
#define BANK_PAGETWO_H
#include "balance.h"
#include "deposit.h"
#include "withdraw.h"
#include "logout.h"

int choice2;
void optionDisplay() {
        std::cout << "WELCOME to NATIONAL BANK of BHARAT" << std::endl;
        std::cout << "1. Balance\n2. Deposit\n3. Withdraw\n4. Exit" << std::endl;
        std::cin >> choice2;
            switch (choice2) {
                case 1:
                    showBalance();
                    break;
                case 2:
                    performDeposit();
                    break;
                case 3:
                    performWithdraw();
                    break;
                case 4:
                    logout();
                default:
                    std::cout << "Invlaid Input" << std::endl;
                    break;
            }
}

#endif //BANK_PAGETWO_H
