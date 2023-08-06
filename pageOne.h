/*
    Created by Smit Patel on 05/08/23.
    Page 1
    Login - Signup Page
*/


#ifndef BANK_PAGEONE_H
#define BANK_PAGEONE_H
#include <iostream>
#include "pageTwo.h"

int choice1;
std::string username, password, loginUsername, loginPassword;

void logSign(){
    std::cout << "Welcome to the Bank "<< username << "\nWhat do you want to do?" << std::endl;
    std::cout << "1. Signup\n2. Login\n3. Exit" << std::endl;
    while(true) {
        std::cin >> choice1;
        switch (choice1) {
            case 1:
                goto signup;
            case 2:
                goto login;
            case 3:
                logout();
            default:
                std::cout << "Invalid Choice" << std::endl;
                break;
        }
    }
    signup:
        std::cout << "Excellent! Please create your credentials" << std::endl;
        std::cout << "Username: ";
        std::cin >> username;
        std::cout << "Password: ";
        std::cin >> password;
        std::cout << "\n";
    login:
        std::cout << "Excellent! Please enter your credentials" << std::endl;
        std::cout << "Enter credentials to log in" << std::endl;
        std::cout << "Username: ";
        std::cin >> loginUsername;
        std::cout << "Password: ";
        std::cin >> loginPassword;
        std::cout << "\n";
        if (password == loginPassword && username == loginUsername){
            optionDisplay();
        }
        else{
            std::cout << "Unsuccessful" << std::endl;
            goto login;
        }
}




#endif //BANK_PAGEONE_H