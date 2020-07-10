// Problem Name : How much Scholarship
// Problem Code : ZCOSCH
// Link         : https://www.codechef.com/viewsolution/35352889

#include <iostream>
using namespace std;

int main() {
	int R;
	cin>>R;
	if(R>=1 && R<=50)
	 cout<<"100";
	else if(R>=51 && R<=100)
	 cout<<"50";
	else 
	cout<<"0";
	return 0;
}
