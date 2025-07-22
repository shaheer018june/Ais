#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int secret_number = std::rand() % 100 + 1; // random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;

    while (guess != secret_number) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secret_number) {
            std::cout << "Too low!" << std::endl;
        } else if (guess > secret_number) {
            std::cout << "Too high!" << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " 
                      << attempts << " attempts." << std::endl;
        }
    }
    return 0;
}
