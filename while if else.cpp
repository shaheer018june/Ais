#include <iostream>
using namespace std;

 int main() {
 
 	int dice = 1 ;
 	
 	while (dice <= 6) {
 		if (dice < 6) {
 			cout << "no way\n";
 		} else {
 		  cout << "yes\n";	
		 }
		 dice = dice + 1;
	}
		 return 0;
}
 
