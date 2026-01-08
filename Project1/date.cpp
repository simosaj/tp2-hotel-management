#include "date.h"
#include <stdexcept>  // for std::invalid_argument
#include <string>

bool Date::isDate(int month, int day, int year) {
    if ((year < 1) || (year > 2026)) return false;
    if ((day < 1) || (day > 31)) return false;
    if ((month < 1) || (month > 12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}

Date::Date(int month, int day, int year) : month_(month), day_(day), year_(year) {
    if (!isDate(month, day, year)) {
        throw std::invalid_argument("Invalid date: " + std::to_string(year) + "/" + std::to_string(month) + "/" + std::to_string(day));
    }
}

int Date::year() {
    return year_;
}

int Date::month() {
    return month_;
}

int Date::day() {
    return day_;
}