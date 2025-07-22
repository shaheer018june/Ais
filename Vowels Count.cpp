#include <iostream>
#include <string>
using namespace std;
 int main() {
 	string s;
 	int n = 0;
 	cout << "Enter Text : "; 
 	getline(cin,s);
 	 for(int i = 0; i < s.length() ; i++) {
 	 	char b = s[i];
 	 	if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u'||
		   b=='A' || b=='E' || b=='I' || b=='O' || b=='U') {
		   	n++;
		   }
		   
	  }
	  cout << "Number of vowels : " << n << endl;
	  return 0;
 }
