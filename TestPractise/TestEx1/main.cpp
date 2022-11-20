#include <iostream>
#include "ConsumerOrder.h"

int main() {

    ConsumerOrder Customer1("Customer 1");
    ConsumerOrder Customer2("Customer 2");

    Customer1.addDish("Dish 1", 15);
    Customer1.addDish("Dish 2", 22);
    Customer1.addDish("Dish 3", 55);

    Customer2.addDish("Dish 1", 1);
    Customer2.addDish("Dish 2", 2);
    Customer2.addDish("Dish 3", 3);

    std::cout << Customer1.length() << std::endl;
    Customer1.removeDish("Dish 2");
    std::cout << Customer1.length() << std::endl;

    std::cout << Customer2.length() << std::endl;

    if (Customer1 > Customer2)
        std::cout << "Order of customer nr1 is more expensive than Order of customer nr2" << std::endl;

    std::cout << Customer1 << std::endl;
    std::cout << Customer2 << std::endl;

    return 0;
}
