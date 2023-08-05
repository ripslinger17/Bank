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
        std::cout << "1. Balance\n2. Deposit\n3. Withdraw" << std::endl;
        std::cin >> choice2;
        std::cout << "\n";
        switch (choice2)
        {
            case 1:
                showBalance();
                break;
            case 2:
                performDeposit();
                break;
            case 3:
                performWithdraw();
                break;
            default:
                invalidLogout();
                break;
        }
}

#endif //BANK_PAGETWO_H
