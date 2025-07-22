#include <iostream>
using namespace std;
int main() {
	char a;
	cout << "Enter a character : ";
	cin >> a;
	char b;
	cout << "Enter a character : ";
	cin >> b;
	cout << "ASCII Value of " << a << " is : " << ((int)a) << endl;
	cout << "ASCII Value of " << b << " is : " << ((int)b) << endl;
	int diff = a - b ;
	if (diff < 0) {
	cout << "Difference is : " << diff*-1;
} else {
	cout << "Difference is : " << diff;
}
return 0;
	
	
	
}
