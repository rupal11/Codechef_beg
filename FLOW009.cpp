// Problem Name : Total Expenses
// Problem Code : FLOW009
// Link         : https://www.codechef.com/viewsolution/35310054

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i,T;
	cin>>T;
	int Q[T],P[T];
	double cost,discount;
	for(i=0;i<T;++i)
	 cin>>Q[i]>>P[i];
	for(i=0;i<T;++i)
	{
	    cost=Q[i]*P[i];
	    if(Q[i]>1000)
	    {
	        discount=cost/10;
	        cost-=discount;
	    }
	    cout<<fixed<<setprecision(6)<<cost<<"\n";
	}
	return 0;
}
