// number_guesser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main()
{
    std::cout << "Welcome to the Number Guessing Game!\n";

    std::cout << "------------------------------\n\n";

    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int targetNumber = std::rand() % 100 + 1;
    int guess = 0; // Variable to store the user's guess
    int attempts = 0; // Variable to count the number of attempts

    std::cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    // Loop until the user guesses the correct number
    while (guess != targetNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++; // Increment the attempts counter

        // Provide feedback on the user's guess
        if (guess > targetNumber) {
            std::cout << "Too high! Try again.\n";
        }
        else if (guess < targetNumber) {
            std::cout << "Too low! Try again.\n";
        }
        else {
            std::cout << "Congratulations! You guessed the correct number " << targetNumber << " in " << attempts << " attempts.\n";
        }
    }

    std::cout << "Thanks for playing!\n\n";
    std::cout << "Press any key to exit...\n";

    // Use cin.get() twice to pause the program before it closes
    std::cin.ignore(); // Ignore the newline character left in the buffer
    std::cin.get(); // Waits for a key press to continue

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
