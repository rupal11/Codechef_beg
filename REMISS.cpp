// Problem Name : Chef and Remissness
// Problem Code : REMISS
// Link         : https://www.codechef.com/viewsolution/35541569
#include <iostream>
using namespace std;

int main() {
	int i,A,B,T;
	cin>>T;
	for(i=0;i<T;++i)
	{
	    cin>>A>>B;

	    cout<<max(A,B)<<" "<<A+B<<"\n ";
	}
	return 0;
}
