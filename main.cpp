/* TODO
- [x] Login/Sign-Up Page ---> SignUp page return, LogIn page return  remaining
- [x] Open account give choice Username and password, initial account 10k
- [x] Withdraw, Deposit, Balance
- [x] Logout
*/
#include <iostream>
#include "bankIntroDisplay.h"
#include "pageOne.h"

int main() {
    int choice3;
    bankIntroDisplay();
    std::cout << "\n";
page1:
    logSign();
    std::cout << "Do you want to exit?\n1.Yes\n2.No\n3.Exit" << std::endl;
        std::cin >> choice3;
        switch (choice3) {
            case 1:
                std::cout << "Have a great day! 😊" << std::endl;
                break;
            case 2:
                goto page1;
                break;
            case 3:
                logout();
            default:
                std::cout << "Invalid Input" << std::endl;
                break;
        }

    return 0;
}
