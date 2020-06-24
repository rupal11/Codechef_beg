//Problem Name : Add Two Numbers 
//Problem Code : FLOW001
//link         : https://www.codechef.com/viewsolution/34667696

#include <iostream>
using namespace std;

int main() {
	int T,i;
	cin>>T;
	int a[T],b[T];
	for(i=0;i<T;++i)
	{
	    cin>>a[i]>>b[i];
	}
	for(i=0;i<T;++i)
	{
	    cout<<a[i]+b[i]<<"\n";
	}
	return 0;
}