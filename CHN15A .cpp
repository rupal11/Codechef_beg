//Problem Name : Mutated Minions
//Problem Code : CHN15A 
//link         : https://www.codechef.com/viewsolution/35809523

#include <iostream>
using namespace std;

int add_and_count(int a[],int n,int k)
{
    int j,count=0;
    for(j=0;j<n;++j)
	    {
	     a[j]+=k;
	     if(a[j]%7==0)
	      count++;
	    }
	return count;
}
int main() {
	int i,j,n,k,T;
	cin>>T;
	for(i=0;i<T;++i)
	{
	    cin>>n>>k;
	    int a[n];
	    for(j=0;j<n;++j)
	     cin>>a[j];
	    cout<<add_and_count(a,n,k)<<"\n";
	}
	
	return 0;
}