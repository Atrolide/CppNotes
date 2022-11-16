#include "Cars.h"

void Cars::carDescription() {
    std::cout << brandName << " is a car brand founded in " << countryName << " in year " << yearFounded << std::endl;
}

//CONSTRUCTOR WITH PARAMETERS - definition
Cars::Cars(std::string brand, std::string country, int year) {
    brandName = brand;
    countryName = country;
    yearFounded = year;
}
