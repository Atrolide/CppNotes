#include <iostream>
#include "ConsumerOrder.h"

int main() {

    ConsumerOrder Customer1("Customer 1");

    Customer1.addDish("Dish 1", 15);
    Customer1.addDish("Dish 2", 22);
    Customer1.addDish("Dish 3", 55);

    std::cout << Customer1.length() << std::endl;
    Customer1.removeDish("Dish 2");
    std::cout << Customer1.length() << std::endl;

}
