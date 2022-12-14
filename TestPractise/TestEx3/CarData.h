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

    //REG NUM SETTER DECLARATION
    void setRegNum(std::string srNum);

    //REG NUM GETTER DECLARATION
    std::string getRegNum();

    //BRAND GETTER DECLARATION
    std::string getBrand();

    //ADD RENTAL METHOD DECLARATION
    void addRental(std::string customerName, int rentTime);

    //REMOVE RENTAL DECLARATION
    void removeRental(std::string someCustomer);

    //AVERAGE TIME DECLARATION
    double averageTime();

    //< OPERATOR OVERLOAD DECLARATION
    bool operator<(const CarData &);

    //INDEXING OPERATOR OVERLOAD DECLARATION
    int &operator[](int subscript);

    //SHIFT OPERATOR OVERLOADING DECLARATION
    friend std::ostream &operator<<(std::ostream &, const CarData &);
};


#endif //TESTEX3_CARDATA_H
