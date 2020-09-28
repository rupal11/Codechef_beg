//Problem Name : Chef and Sum
//Problem Code : CSUM 
//link         : https://www.codechef.com/viewsolution/38308127


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int i,j,n,k,t,flag;
	cin>>t;
	while(t)
	{
	    cin>>n>>k;
	    flag=0;
	    int A[n];
	    for(i=0;i<n;++i)
	    cin>>A[i];
	    sort(A,A+n);
	    for(i=0,j=n-1;i<j;)
	    {
	        if(A[i]+A[j]==k)
	        {
	         flag=1;
	         break;
	        }
	        else if((A[i]+A[j])>k)
	           --j;
	        else
	         ++i;
	    }
	    if(flag==1)
	     cout<<"Yes";
	    else
	     cout<<"No";
	    cout<<endl;
	    --t;
	}
	return 0;
}


