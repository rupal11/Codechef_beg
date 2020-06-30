//Problem Name : Chef and Operators
//Problem Code : CHOPRT
//link         : https://www.codechef.com/viewsolution/34748380

#include <iostream>
using namespace std;

int main() {
	int i,T;
	cin>>T;
	int A[T],B[T];
	for(i=0;i<T;++i)
	{
	    cin>>A[i]>>B[i];
	}
	for(i=0;i<T;++i)
	{
	    if(A[i]<B[i])
	     cout<<"<";
	    else if(A[i]>B[i])
	     cout<<">";
	    else 
	     cout<<"=";
	    cout<<"\n";
	}
	return 0;
}
