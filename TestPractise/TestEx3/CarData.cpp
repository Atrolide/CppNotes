#include "CarData.h"
#include <iostream>

//DEFAULT CONSTRUCTOR DEFINITION
CarData::CarData(std::string rNum, std::string cBrand) {
    regNum = rNum;
    carBrand = cBrand;
}

//COPY CONSTRUCTOR DEFINITION
CarData::CarData(const CarData &someCar) {
    regNum = someCar.regNum;
    carBrand = someCar.carBrand;

    for (int i = 0; i < someCar.customers.size(); i++) {
        customers.push_back(someCar.customers[i]);
        hoursRented.push_back(someCar.hoursRented[i]);
    }
}

//DESTRUCTOR DEFINITION
CarData::~CarData() {
    std::cout << regNum << " has been destroyed!" << std::endl;
}

//REG NUM SETTER DEFINITION
void CarData::setRegNum(std::string srNum) {
    regNum = srNum;
}

//REG NUM GETTER DEFINITION
std::string CarData::getRegNum() {
    return regNum;
}

//BRAND GETTER DEFINITION
std::string CarData::getBrand() {
    return carBrand;
}

//ADD RENTAL METHOD DEFINITION
void CarData::addRental(std::string customerName, int rentTime) {

    customers.push_back(customerName);
    hoursRented.push_back(rentTime);
}

//REMOVE RENTAL DEFINITION
void CarData::removeRental(std::string someCustomer) {
    bool checker = 0;
    for (int i = 0; i < customers.size(); i++) {
        if (customers[i] == someCustomer) {
            checker = 1;
        }
    }
    if (checker == 0) std::cout << "\nno such customer has been found!\n";
    else {
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == someCustomer) {
                customers.erase(customers.begin() + i);
                hoursRented.erase(hoursRented.begin() + i);
            }
        }
    }
}

//AVERAGE TIME DEFINITION
double CarData::averageTime() {
    double sum = 0;
    double avg;
    for (int i = 0; i < hoursRented.size(); ++i) {
        sum += hoursRented[i];
    }
    avg = sum / hoursRented.size();
    return avg;
}

//< OPERATOR OVERLOAD DEFINITION
bool CarData::operator<(const CarData &someCar) {
    if (this->hoursRented.size() < someCar.hoursRented.size()) return true;
    else return false;
}

//INDEXING OPERATOR OVERLOAD DEFINITION
int &CarData::operator[](int subscript) {
    if (subscript > hoursRented.size()) {
        throw std::out_of_range("Out of range expression!");
    } else
        return hoursRented[subscript - 1];
}

//SHIFT OPERATOR OVERLOADING DEFINITION
std::ostream &operator<<(std::ostream &result, const CarData &someCar) {
    int iterator = 0;
    result << "Car: " << someCar.carBrand << " " << someCar.regNum << "\n";
    for (int i = 0; i < someCar.customers.size(); i++) {
        result << i + 1 << ". " << someCar.customers[i] << ", " << someCar.hoursRented[i] << "\n";
        iterator += someCar.hoursRented[i];
    }
    result << "Total time: " << iterator << " hours\n";
    return result;
}



















