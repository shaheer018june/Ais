#include <chrono>
#include <iostream>

int main() {
    // Get the current time point from the system clock
    auto now = std::chrono::system_clock::now();

    // Get the duration since the epoch
    auto epoch_duration = now.time_since_epoch();

    // Cast the duration to seconds
    auto seconds_since_epoch = std::chrono::duration_cast<std::chrono::seconds>(epoch_duration);

    // Get the count of seconds
    long long epoch_time = seconds_since_epoch.count();

    std::cout << "Epoch time: " << epoch_time << " seconds" << std::endl;

    return 0;
}
