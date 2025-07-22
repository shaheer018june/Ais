#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter Any Four digits : ";
    cin >> a ;
    
    int unit = a%10;
    int tenth = (a%100)/10;                     //I did This :)
    int hundred = (a % 1000)/100;
    int thousand = (a % 10000) /1000;
    
    cout << "unit:" << unit << endl;
    cout << "tenth:" << tenth << endl;
    cout << "Hundred:" << hundred << endl;
    cout << "Thousand:" << thousand;
      
      return 0;
  
    
}
