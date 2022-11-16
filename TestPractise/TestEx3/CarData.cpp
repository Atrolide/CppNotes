#include "CarData.h"

#include <iostream>
#include <vector>

//default constructor definition
CarData::CarData(std::string rNum, std::string cBrand) {
    regNum = rNum;
    carBrand = cBrand;
}

//copy constructor definition
CarData::CarData(const CarData &someCar) {
    regNum = someCar.regNum;
    carBrand = someCar.carBrand;

    for(int i = 0; i<someCar.customers.size(); i++) {
        customers.push_back(someCar.customers[i]);
        hoursRented.push_back(someCar.hoursRented[i]);
    }
}
