// Problem Name : Lucky Four
// Problem Code : LUCKFOUR
// Link         : https://www.codechef.com/viewsolution/34687387

#include <iostream>
using namespace std;

int main() {
	int n,i,t,a,count;
	cin>>n;
	int T[n];
	for(i=0;i<n;++i)
	cin>>T[i];
	for(i=0;i<n;++i)
	{
	    t=T[i];
	    count=0;
	    while(t>0)
	    {
	        a=t%10;
	        t=t/10;
	        if(a==4)
	         count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
