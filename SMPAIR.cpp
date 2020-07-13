// Problem Name : The Smallest Pair
// Problem Code : SMPAIR
// Link         : https://www.codechef.com/viewsolution/35398471

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i,j,n,m,T;
    cin>>T;
    vector<int> v[T];
    for(i=0;i<T;++i)
    {
        cin>>n;
        for(j=0;j<n;++j)
        {
            cin>>m;
            v[i].push_back(m);
        }
    }
    for(i=0;i<T;++i)
    {
        sort(v[i].begin(),v[i].end());
        cout<<v[i][0]+v[i][1]<<"\n";
      
    }
	return 0;
}
