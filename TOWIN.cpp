//Problem Name : Winning Strategy
//Problem Code : TOWIN 
//link         : https://www.codechef.com/viewsolution/37349415

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int i,n,t;
	long long int p1,p2;
	cin>>t;
	while(t)
	{
	    cin>>n;
	    int A[n];
	    p1=0;
	    p2=0;
	    for(i=0;i<n;++i)
	     cin>>A[i];
	    sort(A,A+n,greater<int>());
	    p1=A[0];
	    if(n>1) 
	     p2=A[1]+A[2];
	    for(i=3;i<n;++i)
	    {
	       if(i%2==0)
	        p2+=A[i];
	       else
	        p1+=A[i];
	    }
	    if(p1>p2)
	     cout<<"first";
	    else if(p2>p1)
	     cout<<"second";
	    else
	     cout<<"draw";
	    cout<<endl;
	    --t;
	}
	return 0;
}