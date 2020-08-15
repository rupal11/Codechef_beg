// Problem Name : Chef and Secret Ingredient
// Problem Code : PCJ18A
// Link         : https://www.codechef.com/viewsolution/36660278

#include <bits/stdc++.h>>
#include <iostream>
using namespace std;

int main() {
	int i,n,x,T;
	cin>>T;
	while(T)
	{
	    cin>>n>>x;
	    int a[n];
	    for(i=0;i<n;++i)
	     cin>>a[i];
	    sort(a,a+n);
	    if(a[n-1]>=x)
	     cout<<"YES";
	    else
	     cout<<"NO";
	    cout<<endl;
	    --T;
	}
	return 0;
}