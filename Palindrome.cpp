#include<iostream>   
using namespace std;
int main() {
	char i;
	string s;
	cout << "Enter Your Desired Word : ";
	cin >> s;
	bool Misfound = false;
	int n = s.length();
	
	for(int i = 0; i < n/2; i++) {
		if( s[i] != s[n-1-i] ) {
			Misfound = true;
			break;
         }
    }
    if(Misfound) {
    	cout << "False";
	} else {
	cout << "True";
}

	return 0;
}





