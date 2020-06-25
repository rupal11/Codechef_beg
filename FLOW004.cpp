//Problem Name : First and Last Digit
//Problem Code : FLOW004
//link         : https://www.codechef.com/viewsolution/34687262

#include <iostream>
using namespace std;

int main() {
    int T,i,a,b,t;
	cin>>T;
	int n[T];
	for(int i=0;i<T;++i)
	{
	 cin>>n[i];   
	}
	for(i=0;i<T;++i)
	{
	    t=n[i];
	    a=t%10;
	    while(t>0)
	   {
	      b=t%10;
	      t=t/10;
	   }
	 cout<<a+b<<"\n";
	}
	return 0;
}
