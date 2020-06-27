// Problem Name : Reverse The Number
// Problem Code : FLOW007
// Link         : https://www.codechef.com/viewsolution/34710341

#include <iostream>
using namespace std;

int main() {
     int T,i,rev,t;
	cin>>T;
	int n[T];
	for(int i=0;i<T;++i)
	{
	 cin>>n[i];   
	}
	for(i=0;i<T;++i)
	{
	    t=n[i];
	    rev=0;
	    while(t>0)
	   {
	      rev=(rev*10) + (t%10);
	      t=t/10;
	   }
	 cout<<rev<<"\n";
	}
    

	return 0;
}