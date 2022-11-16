#include <iostream>
#include "CarData.h"

int main() {

    std::cout<< "Number of total rents: " <<CarData::getRentalsCount()<<std::endl;

    CarData BMW("EZG2137", "e36");

    BMW.addRental("Karol Wojtyla", 4);
    BMW.addRental("Karol Wojtyla", 1);

    std::cout<< "Number of total rents: " <<CarData::getRentalsCount()<<std::endl;

    BMW.addRental("Karol Wojtyla", 2);
    BMW.addRental("Karol Wojtyla", 3);

    std::cout<< "Number of total rents: " <<CarData::getRentalsCount()<<std::endl;

    std::cout << BMW.averageTime() << std::endl;




    return 0;
}
