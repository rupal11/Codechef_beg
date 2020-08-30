//Problem Name : Chef and Linear Chess
//Problem Code : LINCHESS
//link         : https://www.codechef.com/viewsolution/37323114

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int i,n,k,T,sum,min;
    cin>>T;
    while(T)
    {
        cin>>n>>k;
        int p[n];
        min=INT_MAX;
        for(i=0;i<n;++i)
         cin>>p[i];
        for(i=0;i<n;++i)
        {
            if(k%p[i]==0)
            {
                sum=k/p[i];
                if(sum<min)
                  min=p[i];
            }
             
        }
        if(min==INT_MAX)
         cout<<-1;
        else
         cout<<min;
        cout<<endl;
        --T;
    }
	return 0;
}
