//
// Created by potry on 23.10.2020.
//

#include <string>
#include <iostream>
#include "../headers/Logger.h"

void Logger::println(const std::string& value) {
    std::cout << value << std::endl;
}

void Logger::print(const std::string& value) {
    std::cout << value;
}
