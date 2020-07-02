// Problem Name : The Block Game
// Problem Code : PALL01
// Link         : https://www.codechef.com/viewsolution/34936407

#include <iostream>
using namespace std;

int main() {
     int T,i,rev,t;
	cin>>T;
	int n[T];
	for(int i=0;i<T;++i)
	{
	 cin>>n[i];   
	}
	for(i=0;i<T;++i)
	{
	    t=n[i];
	    rev=0;
	    while(t>0)
	   {
	      rev=(rev*10) + (t%10);
	      t=t/10;
	   }
	 if(rev==n[i])
	  cout<<"wins";
	 else
	  cout<<"loses";
	 cout<<"\n";
	}
    

	return 0;
}