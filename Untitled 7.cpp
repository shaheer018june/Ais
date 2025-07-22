#include <chrono>
#include <iostream>
using namespace std;

int main() {
    // Get the current time point from the system clock
    auto now = std::chrono::system_clock::now();

    // Get the duration since the epoch
    auto epoch_duration = now.time_since_epoch(); 
    
    cout << "current time" << now << end1;
	
	cout << "epoch time" << epoch_duration << end1;
	
	return 0;
}
