//
// Created by potry on 23.10.2020.
//

#ifndef DUNGEONS_COOKIES_LOGGER_H
#define DUNGEONS_COOKIES_LOGGER_H

#include <string>

using std::string;

class Logger {
public:
    static void print(const std::string &value);

    static void println(const std::string &value);
};


#endif //DUNGEONS_COOKIES_LOGGER_H
