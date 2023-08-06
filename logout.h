//
// Created by Smit Patel on 05/08/23.
//

#ifndef BANK_LOGOUT_H
#define BANK_LOGOUT_H

#include <iostream>
#include <chrono>
#include <thread>

void logout(){
    std::cout << "Exiting in" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    for (int i = 3; i >= 0; i--)
    {
        std::cout << i << " second" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Have a great day! 😊" << std::endl;
    exit(1);
}

#endif //BANK_LOGOUT_H
