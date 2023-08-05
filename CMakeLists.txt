cmake_minimum_required(VERSION 3.25)
project(Bank)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bank main.cpp bankIntroDisplay.h pageOne.h pageTwo.h balance.h withdraw.h deposit.h logout.h)
