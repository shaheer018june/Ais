#include <iostream>
using namespace std;
int main () {
	int a;
	cout << "Enter Your Desired Number  : ";
	cin >> a;
	
	for (int i = 0; i > a; i--) {
		for (int j = 0; j > a+i; j--) {
			cout << "  * ";
		}
		cout << endl;
	}
	return 0;
}
