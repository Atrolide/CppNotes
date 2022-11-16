#ifndef TESTEX3_CARDATA_H
#define TESTEX3_CARDATA_H
#include <iostream>
#include <vector>

class CarData {

private:
    std::string regNum;
    std::string carBrand;

    std::vector<std::string> customers;
    std::vector<int> hoursRented;

public:
    //DEFAULT CONSTRUCTOR DECLARATION
    CarData(std::string rNum, std::string cBrand);

    //COPY CONSTRUCTOR DECLARATION
    CarData(const CarData &someCar);

    //DESTRUCTOR DECLARATION
    ~CarData();

};


#endif //TESTEX3_CARDATA_H
