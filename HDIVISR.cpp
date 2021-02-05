// Problem Name : Highest Divisor
// Problem Code : HDIVISR 
// Link         : https://www.codechef.com/viewsolution/42284520

#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	for(i=10;i>0;--i)
	{
	    if(n%i==0)
	    {
	        cout<<i;
	        break;
	    }
	}
	return 0;
}