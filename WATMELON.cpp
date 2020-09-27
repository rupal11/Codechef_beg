//Problem Name : Watermelon
//Problem Code : WATMELON
//link         : https://www.codechef.com/viewsolution/38267866


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int i,n,t,ssum;
  cin>>t;
  while(t)
  {
      ssum=0;
      cin>>n;
      int A[n];
      for(i=0;i<n;++i)
      {
       cin>>A[i];
      } 
     for(i=0;i<n;++i)
        ssum+=A[i];
      cout<<ssum<<endl;
      if(ssum>=0)
       cout<<"YES";
      else
       cout<<"NO";
      cout<<endl;
      --t;
  }
  return 0;
}

