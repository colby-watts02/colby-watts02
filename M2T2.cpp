/*
CSC 134
M2T2 - Receipt Calculator
Colby Watts
09/29/2025
*/

#include <iostream>
#include <iomanip> 
#include <string>  
using namespace std;

int main() {
    // Purpose - create receipt
    // Should also handle sales tax (8%)

    // Declare and Initialize variables
    string item = "🍔 Burger";
    double item_price = 9.28;
    double tax_percent = 0.08; // 8% is 8/100
    double tax_amount;         // tax in $
    double total;              // price + tax

    // Greet user and state the order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;
    cout << endl;

    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // calculate 8% of the item
    total = item_price + tax_amount;       // Corrected calculation: price + tax

    // Print the receipt
    // Set up currency formatting: 2 decimal places and fixed point
    cout << setprecision(2) << fixed; 

    // Print the formatted receipt
    cout << "-------------------------------" << endl;
    cout << "          RECEIPT" << endl;
    cout << "-------------------------------" << endl;
    
    // setw(20) for the label (left-aligned), setw(6) for the price (right-aligned)
    cout << setw(20) << left << "Item Price (" << item << ")" << ": $" << setw(6) << right << item_price << endl;
    cout << setw(20) << left << "Sales Tax (8%)"           << ": $" << setw(6) << right << tax_amount << endl;
    
    cout << "-------------------------------" << endl;
    cout << setw(20) << left << "TOTAL DUE"                << ": $" << setw(6) << right << total << endl;
    cout << "-------------------------------" << endl;

    return 0; // no errors
}