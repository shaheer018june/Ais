#include <iostream>
using namespace std;
int main() {
	int n = 55;
	int x;
	int fn = 1;
	int fn1 = 1;
	int fn2 = 0;

	cout << "Fibonacchi numbers"<< '\n';
	int i = n;
    while(i <= x) {
    	if(i == 0) cout << fn2 << ", ";
    	else if(i == 1) cout << fn1 << ", ";
    	else{
    		cout << fn << ", ";
			fn2 = fn1;
			fn1 = fn;
    		fn = fn1 + fn2;
		}
    } 
      
    	cout << '\n';
	
	return 0;
	
}
