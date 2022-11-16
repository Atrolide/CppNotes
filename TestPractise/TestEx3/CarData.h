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
    //default constructor declaration
    CarData(std::string rNum, std::string cBrand);

    //copy constructor declaration
    CarData(const CarData &someCar);

    //destructor declaration
    ~CarData();

};


#endif //TESTEX3_CARDATA_H
