// Problem Name : Chef Judges a Competition
// Problem Code : CO92JUDG
// Link         : https://www.codechef.com/viewsolution/36433257

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,j,n,T,sumA,sumB;
	cin>>T;
	for(i=0;i<T;++i)
	{
	    cin>>n;
	    int A[n],B[n];
	    sumA=0;
	    sumB=0;
	    for(j=0;j<n;++j)
	     cin>>A[j];
	    for(j=0;j<n;++j)
	     cin>>B[j];
	     sort(A,A+n);
	     sort(B,B+n);
	     for(j=0;j<n-1;++j)
	     {
	         sumA+=A[j];
	         sumB+=B[j];
	     }
	     if(sumA==sumB)
	      cout<<"Draw";
	     else if(sumA<sumB)
	      cout<<"Alice";
	     else
	      cout<<"Bob";
	     cout<<endl;
	}
	return 0;
}
