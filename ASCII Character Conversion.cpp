#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "Enter a character : ";
	cin >> a;
	int x = ((int)a);
	if(x <= 90) {
		cout << "Same Char : " << a;
	}
	else if ( x >= 97 && x <= 122 ) {
		x = x - 32;
		
		char c = ((char)x);
		cout << "Converted Character : " << c;
	}
	return 0;
}

