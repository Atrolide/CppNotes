#include "ConsumerOrder.h"
#include <iostream>

ConsumerOrder::ConsumerOrder(std::string cName) {
    customerName = cName;
   orderNum++;
   customerID = orderNum;
}

ConsumerOrder::ConsumerOrder(const ConsumerOrder &someCustomer) {
    customerName = someCustomer.customerName;
    for (int i = 0; i < someCustomer.dishName.size(); i++) {
        dishName.push_back(someCustomer.dishName[i]);
        dishPrice.push_back(someCustomer.dishPrice[i]);
    }
}

ConsumerOrder::~ConsumerOrder() {
    std::cout << "Order number " << " has been destroyed" << std::endl;
}

void ConsumerOrder::setCustomer(std::string cName) {
    customerName = cName;
}

std::string ConsumerOrder::getCustomer() {
    return customerName;
}

void ConsumerOrder::addDish(std::string dName, int dPrice) {
    dishName.push_back(dName);
    dishPrice.push_back(dPrice);
}

void ConsumerOrder::removeDish(std::string someDish) {
    bool checker = 0;
    for (int i = 0; i < dishName.size(); i++) {
        if (dishName[i] == someDish) {
            checker = 1;
        }
    }
    if (checker == 0) std::cout << "\nno such dish has been found!\n";
    else {
        for (int i = 0; i < dishName.size(); i++) {
            if (dishName[i] == someDish) {
                dishName.erase(dishName.begin() + i);
                dishPrice.erase(dishPrice.begin() + i);
            }
        }
    }
}

int ConsumerOrder::length() {
    return dishName.size();
}

int ConsumerOrder::getTotalPrice() const {
    int total{0};
    for (auto element: dishPrice) {
        total += element;
    }
    return total;
}

bool ConsumerOrder::operator>(const ConsumerOrder &someDish) {
    if (this->getTotalPrice() > someDish.getTotalPrice()) return true;
    else return false;
}

int &ConsumerOrder::operator[](int subscript) {
    if (subscript > dishPrice.size()) {
        throw std::out_of_range("Out of range expression!");
    } else
        return dishPrice[subscript - 1];
}

std::ostream &operator<<(std::ostream &result, const ConsumerOrder &someCustomer) {
    result << "Customer number " << someCustomer.customerID << ": " << someCustomer.customerName << "\n";
    for (int i = 0; i < someCustomer.dishName.size(); i++) {
        result << i + 1 << ". " << someCustomer.dishName[i] << ", " << someCustomer.dishPrice[i] << "\n";
    }
    result << "Total price: " << someCustomer.getTotalPrice();
    return result;
}




