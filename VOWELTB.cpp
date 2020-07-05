// Problem Name : Is it a VOWEL or CONSONANT
// Problem Code : VOWELTB
// Link         : https://www.codechef.com/viewsolution/35087079

#include <iostream>
#include <cctype>
using namespace std;

int main() {
	 char c;
	 cin>>c;
	 switch(c)
	 {
	     case 'A' :
	     case 'E' :
	     case 'I' :
	     case 'O' :
	     case 'U' :cout<<"Vowel";
	               break;
	     default  :cout<<"Consonant";
	 }
	return 0;
}
