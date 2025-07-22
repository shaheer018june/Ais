#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter Any Four digits : ";
    cin >> a ;
    
    int unit = a % 10;
	 // calculates the unit digit using modulo operator.
    int tenth = (a % 100)/10;
	 // calculates the tenth digit by first getting the last two digits and then dividing by 10.           
    int hundred = (a % 1000)/100; // 
    int thousand = (a % 10000) /1000;
    
    cout << "unit : " << unit << endl;
    cout << "tenth : " << tenth << endl;
    cout << "Hundred : " << hundred << endl;
    cout << "Thousand : " << thousand;
      
      return 0;
  
    
}
