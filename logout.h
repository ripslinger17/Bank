//
// Created by Smit Patel on 05/08/23.
//

#ifndef BANK_LOGOUT_H
#define BANK_LOGOUT_H

void invalidLogout(){
    std::cout << "Incorrect choice" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << "Because you have selected incorrect choice you will exit the code in: " << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    for (int i = 3; i >= 0; i--)
    {
        std::cout << i << " second" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Have a great day! 😊" << std::endl;
}

#endif //BANK_LOGOUT_H
