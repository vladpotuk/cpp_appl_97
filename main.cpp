#include <iostream>
#include "foreignpassport.h"

int main() {
    Passport passport("John Doe", "123456789", "Ukrainian");

    
    std::cout << "Passport Information:" << std::endl;
    std::cout << "Full Name: " << passport.getFullName() << std::endl;
    std::cout << "Passport Number: " << passport.getPassportNumber() << std::endl;
    std::cout << "Nationality: " << passport.getNationality() << std::endl << std::endl;

    
    ForeignPassport foreignPassport("Jane Smith", "987654321", "Ukrainian", "FP123456");

    
    foreignPassport.addVisa("USA Visa");
    foreignPassport.addVisa("UK Visa");

    
    std::cout << "Foreign Passport Information:" << std::endl;
    std::cout << "Full Name: " << foreignPassport.getFullName() << std::endl;
    std::cout << "Passport Number: " << foreignPassport.getPassportNumber() << std::endl;
    std::cout << "Nationality: " << foreignPassport.getNationality() << std::endl;
    std::cout << "Foreign Passport Number: " << foreignPassport.getForeignPassportNumber() << std::endl;

    
    std::cout << "Visas:" << std::endl;
    for (const std::string& visa : foreignPassport.getVisas()) {
        std::cout << "- " << visa << std::endl;
    }

    return 0;
}
