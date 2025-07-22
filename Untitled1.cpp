#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secret = std::rand() % 100 + 1;
    int guess = 0;
    int tries = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";

    while (guess != secret) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess < secret) {
            std::cout << "Too low!\n";
        } else if (guess > secret) {
            std::cout << "Too high!\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries.\n";
        }
    }
    return 0;
}
