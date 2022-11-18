#include <iostream>
#include "CarData.h"

int main() {

    CarData BMW("EZG2137", "BMW E36");
    CarData Toyota("EL12345", "Toyota Corolla");

    BMW.addRental("Karol Wojtyla", 4);
    BMW.addRental("Karol Wojtyla", 1);
    BMW.addRental("Karol Wojtyla", 2);
    BMW.addRental("Karol Wojtyla", 3);

    Toyota.addRental("Papaj",  5);
    Toyota.addRental("Papaj", 3);

    std::cout << BMW.averageTime() << std::endl;
    std::cout << Toyota.averageTime() << std::endl;

   if(Toyota < BMW) {
        std::cout << Toyota.getBrand() << " is used less often than " << BMW.getBrand() << std::endl;
   }

    return 0;
}
