#ifndef PRIVNOTES_CARS_H
#define PRIVNOTES_CARS_H
#include <iostream>


class Cars {
public:
    std::string brandName;
    std::string countryName;
    int yearFounded;

    //CONSTRUCTOR WITH PARAMETERS - declaration
    Cars(std::string brand, std::string country, int year);

    void carDescription();
};


#endif //PRIVNOTES_CARS_H
