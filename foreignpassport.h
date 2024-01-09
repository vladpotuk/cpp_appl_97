#ifndef FOREIGNPASSPORT_H
#define FOREIGNPASSPORT_H

#include "passport.h"
#include <vector>

class ForeignPassport : public Passport {
public:
    ForeignPassport(const std::string& fullName, const std::string& passportNumber, const std::string& nationality,
        const std::string& foreignPassportNumber);

    
    std::string getForeignPassportNumber() const;

    
    void addVisa(const std::string& visa);
    std::vector<std::string> getVisas() const;

private:
    std::string foreignPassportNumber;
    std::vector<std::string> visas;
};

#endif 

