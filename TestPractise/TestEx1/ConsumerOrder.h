#ifndef TESTEX1_CONSUMERORDER_H
#define TESTEX1_CONSUMERORDER_H

#include <iostream>
#include <vector>


class ConsumerOrder {

private:
    static int total;
    std::string customerName;
    std::vector<std::string> dishName;
    std::vector<int> dishPrice;

public:
    ConsumerOrder(std::string cName);
    ConsumerOrder(const ConsumerOrder &someCustomer);
    ~ConsumerOrder();

    void setCustomer(std::string cName);
    std::string getCustomer();
    void addDish(std::string dName, int dPrice);
    void removeDish(std::string someDish);
    int length();
    bool operator>(const ConsumerOrder &someDish)
};

#endif //TESTEX1_CONSUMERORDER_H