//Problem Name : Helping Chef
//Problem Code : FLOW008
//link         : https://www.codechef.com/viewsolution/34747962

#include <iostream>
using namespace std;

void help_chef(int n)
{
    if(n<10)
     cout<<"Thanks for helping Chef!";
    else
     cout<<"-1";
    cout<<"\n";
}

int main() {
	int i,T;
	cin>>T;
	int n[T];
	for(i=0;i<T;++i)
	 cin>>n[i];
	for(i=0;i<T;++i)
	 help_chef(n[i]);
	
	return 0;
}