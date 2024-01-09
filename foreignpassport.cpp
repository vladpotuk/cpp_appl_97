#include "foreignpassport.h"

ForeignPassport::ForeignPassport(const std::string& fullName, const std::string& passportNumber, const std::string& nationality,
    const std::string& foreignPassportNumber)
    : Passport(fullName, passportNumber, nationality), foreignPassportNumber(foreignPassportNumber) {}

std::string ForeignPassport::getForeignPassportNumber() const {
    return foreignPassportNumber;
}

void ForeignPassport::addVisa(const std::string& visa) {
    visas.push_back(visa);
}

std::vector<std::string> ForeignPassport::getVisas() const {
    return visas;
}
