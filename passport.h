
#ifndef PASSPORT_H
#define PASSPORT_H

#include <string>

class Passport {
public:
    Passport(const std::string& fullName, const std::string& passportNumber, const std::string& nationality);

    
    std::string getFullName() const;
    std::string getPassportNumber() const;
    std::string getNationality() const;

private:
    std::string fullName;
    std::string passportNumber;
    std::string nationality;
};

#endif 

