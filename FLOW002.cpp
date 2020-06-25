//Problem Name : Find Remainder
//Problem Code : FLOW002
//link         : https://www.codechef.com/viewsolution/34668075

#include <iostream>
using namespace std;

int main() {
    int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;++i)
	{
	    cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;++i)
	{
	    cout<<a[i]%b[i]<<"\n";
	}
	return 0;
}