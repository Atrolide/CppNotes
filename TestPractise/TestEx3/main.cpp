#include <iostream>
#include "CarData.h"

int main() {

    CarData BMW("EZG2137", "e36");

    BMW.addRental("Karol Wojtyla", 4);
    BMW.addRental("Karol Wojtyla", 1);
    BMW.addRental("Karol Wojtyla", 2);
    BMW.addRental("Karol Wojtyla", 3);

    std::cout << BMW.averageTime() << std::endl;




    return 0;
}
