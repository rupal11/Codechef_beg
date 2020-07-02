//Problem Name : Valid Triangles
//Problem Code : FLOW013
//link         : https://www.codechef.com/viewsolution/34934921

#include <iostream>
using namespace std;

int main() {
	int i,T;
	cin>>T;
	int A[T],B[T],C[T];
	for(i=0;i<T;++i)
	{
	    cin>>A[i]>>B[i]>>C[i];
	}
	for(i=0;i<T;++i)
	{
	    if((A[i]+B[i]+C[i])==180)
	     cout<<"YES";
	    else
	     cout<<"NO";
	    cout<<"\n";
	}
	return 0;
}