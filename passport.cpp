#include "passport.h"

Passport::Passport(const std::string& fullName, const std::string& passportNumber, const std::string& nationality)
    : fullName(fullName), passportNumber(passportNumber), nationality(nationality) {}

std::string Passport::getFullName() const {
    return fullName;
}

std::string Passport::getPassportNumber() const {
    return passportNumber;
}

std::string Passport::getNationality() const {
    return nationality;
}
