// Problem Name : Second Largest
// Problem Code : FLOW017
// Link         : https://www.codechef.com/viewsolution/35445588

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int i,j,T;
	cin>>T;
	int A[3];
	for(i=0;i<T;++i)
	{
	    for(j=0;j<3;++j)
	    {
	        cin>>A[j];
	    }
	    sort(A,A+3);
	    cout<<A[1]<<"\n";
	}
	return 0;
}
