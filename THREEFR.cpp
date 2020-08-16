// Problem Name : Three Friends
// Problem Code : THREEFR
// Link         : https://www.codechef.com/viewsolution/36771208


#include <iostream>
using namespace std;

int main() {
    int x,y,z,largest,T;
	cin>>T;
	while(T)
	{
	    cin>>x>>y>>z;
	    largest=x>y ? x>z ? x:z : y>z ? y:z;
	    if(largest==(x+y) || largest==(y+z) ||largest==(x+z))
	     cout<<"yes\n";
	    else
	     cout<<"no\n";
	    --T;
	}
	
	return 0;
}