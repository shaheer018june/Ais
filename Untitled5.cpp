#include <iostream>
#include <string>
using namespace std;

  int main() {
  	string myString = "Hello";
  	cout << "Original string:" << myString << "\n";
  	
  	cout << "First character:" << myString.at(0) << "\n";
  	cout << "Second character:" << myString.at(1) << "\n";
  	cout << "last character:" << myString.at(4) << "\n";
  	
  	myString.at(0) = 'J';
  	cout << "Changed character:" << myString << "\n";
  	return 0;
	    }
