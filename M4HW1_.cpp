//Colbywatts


#include <iostream>

int main() {
    // Initialize the counter
    int i = 1;

    // Define the number for the times table
    int multiplier = 5;

    // Start the while loop
    while (i <= 12) {
        // Calculate the product
        int product = multiplier * i;

        // Print the result in the specified format
        std::cout << multiplier << " times " << i << " is " << product << "." << std::endl;

        // Increment the counter
        i++; // Shorthand for i = i + 1
    }

    return 0;
}