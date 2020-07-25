//Problem Name : Rectangle
//Problem Code : RECTANGL
//link         : https://www.codechef.com/viewsolution/35873741

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int i,j,a[4],T;
	cin>>T;
	for(i=0;i<T;++i)
	{
	    for(j=0;j<4;++j)
	     cin>>a[j];
	    sort(a,a+4);
	    if(a[0]==a[1] && a[2]==a[3])
	     cout<<"YES\n";
	    else 
	    cout<<"NO\n";
	}
	return 0;
}