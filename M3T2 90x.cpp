/*
CSC - 134
Craps game
Colby Watts
10/11/2025
*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to simulate rolling a single six-sided die (from previous step)
int rollDie() {
    return (rand() % 6) + 1;
}

// Function to simulate rolling two dice (from previous step)
int rollDice() {
    int die1 = rollDie();
    int die2 = rollDie();
    int sum = die1 + die2;
    std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
    return sum;
}

int main() {
    // 1. Seed the random number generator
    srand(time(0));

    // --- PHASE 1: THE COME OUT ROLL ---
    std::cout << "--- STARTING COME OUT ROLL ---\n";
    int sum = rollDice();

    // 2. Implement the Craps decision tree for the first roll
    if (sum == 7 || sum == 11) {
        // NATURAL WIN
        std::cout << "NATURAL! You WIN!\n";
    }
    else if (sum == 2 || sum == 3 || sum == 12) {
        // CRAPS LOSS
        std::cout << "CRAPS! You LOSE!\n";
    }
    else {
        // ESTABLISH POINT
        int point = sum;
        std::cout << "Point is established! Point is: " << point << std::endl;

        // --- PHASE 2: POINT PHASE LOGIC (Placeholder for next step) ---
        // This is where the game continues. implement this next.
        bool pointPhase = true;
        int nextRoll;

        std::cout << "\n--- ENTERING POINT PHASE ---\n";

        // Keep rolling until the player hits the Point or a 7
        while (pointPhase) {
            std::cout << "Rolling again...\n";
            nextRoll = rollDice();

            if (nextRoll == point) {
                std::cout << "You rolled the Point (" << point << ")! You WIN!\n";
                pointPhase = false; // Game ends
            }
            else if (nextRoll == 7) {
                std::cout << "SEVEN OUT! You LOSE!\n";
                pointPhase = false; // Game ends
            }
            else {
                std::cout << "No decision. Rolling again...\n";
            }
        }
    }

    std::cout << "\n--- GAME OVER ---\n";
    return 0;
}