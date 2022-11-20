#ifndef TESTEX1_CONSUMERORDER_H
#define TESTEX1_CONSUMERORDER_H

#include <iostream>
#include <vector>


class ConsumerOrder {

private:
//    int orderNum{0};
//    int customerID;

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

    int getTotalPrice() const;

    bool operator>(const ConsumerOrder &someDish);

    int &operator[](int subscript);

    friend std::ostream &operator<<(std::ostream &result, const ConsumerOrder &someCustomer);


};

#endif //TESTEX1_CONSUMERORDER_H


/*

bool operator<(const order& inOrder){
    return getTotalPrice() < inOrder.getTotalPrice();
}

bool operator>{
        return getTotalPrice() > inOrder.getTotalPrice();
}
 */