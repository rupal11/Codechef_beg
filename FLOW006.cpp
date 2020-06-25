//Problem Name : Sum of Digit
//Problem Code : FLOW006
//link         : https://www.codechef.com/viewsolution/34505085

#include <iostream>
using namespace std;

int main() {
	int T,a,i,sum;
	cin>>T;
	int n[T];
	for(i=0;i<T;++i)
	  cin>>n[i];
	 for(i=0;i<T;++i)
	 {
	     a=n[i];
	     sum=0;
	     while(a)
	     {
	         sum+=a%10;
	         a=a/10;
	     }
	     cout<<sum<<"\n";
	 }
	return 0;
}