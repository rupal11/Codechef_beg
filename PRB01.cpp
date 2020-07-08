// Problem Name : Primality Test
// Problem Code : PRB01
// Link         : https://www.codechef.com/viewsolution/35306073

#include <iostream>
using namespace std;

int main() {
	int i,j,T,flag;
	cin>>T;
	 int n[T];
	 for(i=0;i<T;++i)
	  cin>>n[i];
	 for(i=0;i<T;++i)
	 {
         flag =1;
         if(n[i]==1)
          flag=0;
         for(j=2;j<=n[i]/2;++j)
         {
          if(n[i]%j==0)
           flag=0;
         }
         if(flag==1)
          cout<<"yes"<<"\n";
         else
          cout<<"no"<<"\n";
	 }
	return 0;
}