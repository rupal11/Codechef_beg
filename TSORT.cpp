// Problem Name : Turbo Sort
// Problem Code : TSORT
// Link         : https://www.codechef.com/viewsolution/35396344

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int i,m,T;
	vector<int> v;
	cin>>T;
	for(i=0;i<T;++i)
	{
	    cin>>m;
	    v.push_back(m);
	}
	sort(v.begin(),v.end());
	for(auto i : v)
	 cout<<i<<"\n";
	
	return 0;
}
