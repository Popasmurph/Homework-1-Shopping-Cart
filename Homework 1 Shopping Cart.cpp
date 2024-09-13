// Homework 1 Shopping Cart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum MembershipLevel {
    NONE,
    BRONZE,
    SILVER,
    GOLD
};

double applyDiscount(double totalPrice, MembershipLevel level)
{
    switch (level) {
        case 0: 
            return totalPrice;
        case 1:
            return totalPrice * .95;
        case 2:
            return totalPrice * .9;
        case 3:
            return totalPrice * .85;
        default:
            cout << "Invalid input. Assuming no discount \n";
            return totalPrice;
    }
}

int main()
{
    int discount;
    double current_item = 0, total = 0;
    cout << "Please enter the price of the item you are buying one at a time. Press 0 to finish shopping and input your discount level:";
    cin >> current_item;
    while (current_item != 0)
    {
        total += current_item;
        cout << "Next item price : ";
        cin >> current_item;
    }
    cout << "Please enter your discount level. \n 0 for NONE: 0% discount \n 1 for BRONZE: 5% discount \n 2 for SILVER: 10% discount \n 3 for GOLD: 15% discount \n";
    cin >> discount;
    cout << "The price before discount is: " << total << "\n";
    cout << "The final price after dicount is: " << applyDiscount(total, (MembershipLevel)discount);
    return 0;
}

