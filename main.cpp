/* TODO
- [x] Login/Sign-Up Page ---> SignUp page return, LogIn page return  remaining
- [x] Open account give choice Username and password, initial account 10k
- [x] Withdraw, Deposit, Balance
- [ ] Logout
*/
#include <iostream>
#include <chrono>
#include <thread>
#include "bankIntroDisplay.h"
#include "pageOne.h"

int main() {
    int choice3;
    bankIntroDisplay();
    std::cout << "\n";
page1:
    logSign();
    std::cout << "Do you want to exit?\n1.Yes\n2.No" << std::endl;
    std::cin >> choice3;

    switch (choice3) {
        case 1:
            std::cout << "Have a great day! 😊" << std::endl;
            break;
        case 2:
            goto page1;
            break;
        default:
            invalidLogout();
            break;
    }

    return 0;
}
