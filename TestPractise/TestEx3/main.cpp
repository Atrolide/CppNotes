#include <iostream>
#include "CarData.h"

int main() {

    CarData BMW("EZG1337", "BMW E36");
    CarData Toyota("EL12345", "Toyota Corolla");

    BMW.addRental("Customer One", 4);
    BMW.addRental("Customer Two", 1);
    BMW.addRental("Customer Three", 2);
    BMW.addRental("Customer Four", 3);
    BMW.addRental("Customer Five", 5);

    Toyota.addRental("Customer X", 5);
    Toyota.addRental("Customer Y", 3);

    std::cout << BMW.getRegNum() << std::endl;
    BMW.setRegNum("EZG2137");
    std::cout << BMW.getRegNum() << std::endl;

    std::cout << "BMW rent time on position is: " << BMW.operator[](5) << std::endl;
    std::cout << "Toyota rent time on position is: " << Toyota.operator[](2) << std::endl;

    std::cout << "\n";

    std::cout << "Average rental time of BMW is: " << BMW.averageTime() << std::endl;
    std::cout << "Average rental time of Toyota is: " << Toyota.averageTime() << std::endl;

    std::cout << "\n";

    if (Toyota < BMW) {
        std::cout << Toyota.getBrand() << " is used less often than " << BMW.getBrand() << std::endl;
    }

    std::cout << "\n";

    std::cout << BMW;

    BMW.removeRental("Customer Four");

    std::cout << "\n";
    std::cout << BMW;
    std::cout << "\n";
    std::cout << Toyota;
    std::cout << "\n";
    return 0;
}
