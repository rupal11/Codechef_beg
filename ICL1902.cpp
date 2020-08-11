// Problem Name : FlatLand
// Problem Code : ICL1902 
// Link         : https://www.codechef.com/viewsolution/36550645

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,s,T;
	cin>>T;
	while(T)
	{
	    cin>>n;
	    int x=0;
	    while(n>0)
	    {
	        s=(int)sqrt(n);
	        n=n-s*s;
	        x++;
	    }
	    cout<<x<<endl;;
	    --T;
	}
	return 0;
}