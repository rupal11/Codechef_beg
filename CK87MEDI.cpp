// Problem Name : Chef and Employment Test
// Problem Code : CK87MEDI
// Link         : https://www.codechef.com/viewsolution/36551238

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,i,j,k,T;
	cin>>T;
	while(T)
	{
	  cin>>n>>k;
	  int a[n];
	  for(i=0;i<n;++i)
	   cin>>a[i];
	  sort(a,a+n);
	  j=(n+k)/2;
	  if(n>k)
	   cout<<a[j];
	  else
	   cout<<a[n];
	  cout<<endl;
	    --T;
	}
	return 0;
}
