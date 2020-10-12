//Problem Name : Covid Run
//Problem Code : CVDRUN
//link         : https://www.codechef.com/viewsolution/38818535

#include <iostream>

using namespace std;

int main() {
	int i,t,n,k,x,y;
	cin>>t;
	while(t)
	{
	    cin>>n>>k>>x>>y;
	    i=x;
	    do
	    {
	        i=(k+i)%n;
	        if(i==y)
	         break;
	    }
	    while(i!=x);
	    if(i==y)
	     cout<<"YES";
	    else
	     cout<<"NO";
	    cout<<endl;
	    --t;
	}
	return 0;
}
