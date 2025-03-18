#include <iostream>
#include <iomanip>
#include <string>

// Author: Nathaniel T.
// Date: February 16, 2025
// Purpose: This program is simulating a store receipt by calculating the subtotal, tax, and total cost of five items.

int main() {
    // Declare string variables for item names
    std::string item1 = "Item A";
    std::string item2 = "Item B";
    std::string item3 = "Item C";
    std::string item4 = "Item D";
    std::string item5 = "Item E";

    // Declare floating-point variables for item prices
    double price1 = 10.99;
    double price2 = 5.49;
    double price3 = 3.75;
    double price4 = 12.00;
    double price5 = 7.25;

    // Constant variable for tax percentage
    const double TAX_PERCENTAGE = 0.0925;

    // Calculate subtotal
    double subtotal = price1 + price2 + price3 + price4 + price5;

    // Calculate tax amount
    double taxAmount = subtotal * TAX_PERCENTAGE;

    // Calculate total cost
    double totalCost = subtotal + taxAmount;

    // Output the receipt
    std::cout << std::fixed << std::setprecision(2); // Set precision for currency format
    std::cout << "Store Receipt" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << item1 << ": $" << price1 << std::endl;
    std::cout << item2 << ": $" << price2 << std::endl;
    std::cout << item3 << ": $" << price3 << std::endl;
    std::cout << item4 << ": $" << price4 << std::endl;
    std::cout << item5 << ": $" << price5 << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "Tax (9.25%): $" << taxAmount << std::endl;
    std::cout << "Total: $" << totalCost << std::endl;
    std::cout << "---------------------------------" << std::endl;

    return 0;
}
