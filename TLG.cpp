// Problem Name : The Lead Game
// Problem Code : TLG
// Link         : https://www.codechef.com/viewsolution/35542278

#include <iostream>
using namespace std;

int main() {
	int i,n,j=0,largest=0;
	cin>>n;
	int S[n],T[n],D[n];
	for(i=0;i<n;++i)
	{
	    cin>>S[i]>>T[i];
	    if(i!=0)
	    {
	        S[i]+=S[i-1];
	        T[i]+=T[i-1];
	    }
	}
	for(i=0;i<n;++i)
	{
	    D[i]=abs(S[i]-T[i]);
	    if(largest<D[i])
	    {
	        largest=D[i];
	        j=i;
	    }
	}
	if(S[j]>T[j])
	 cout<<"1 ";
	else
	cout<<"2 ";
	cout<<largest;
	return 0;
}