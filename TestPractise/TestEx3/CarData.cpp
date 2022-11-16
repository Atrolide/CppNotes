#include "CarData.h"

#include <iostream>
#include <vector>

//DEFAULT CONSTRUCTOR DEFINITION
CarData::CarData(std::string rNum, std::string cBrand) {
    regNum = rNum;
    carBrand = cBrand;
}

//COPY CONSTRUCTOR DEFINITION
CarData::CarData(const CarData &someCar) {
    regNum = someCar.regNum;
    carBrand = someCar.carBrand;

    for(int i = 0; i<someCar.customers.size(); i++) {
        customers.push_back(someCar.customers[i]);
        hoursRented.push_back(someCar.hoursRented[i]);
    }
}

//DESTRUCTOR DEFINITION
CarData::~CarData() {
    std::cout << regNum << " has been destroyed!" << std::endl;
}


