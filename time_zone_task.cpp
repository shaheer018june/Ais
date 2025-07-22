#include <iostream>
using namespace std;
int main() {
	int a ;
	int b ;
	int i=0 ;
	 cout << "Fibonacci Numbers" << '\n';
	 
	  while(i <= 20) {
	  
	  int next = a+b;
	  a = b;
	  b = next;
	  cout << a << "   ,  ";
	  i++;
   }
	   return 0;
}
