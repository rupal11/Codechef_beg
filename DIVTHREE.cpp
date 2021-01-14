// Problem Name : Chef and Division 3 
// Problem Code : DIVTHREE 
// Link         : https://www.codechef.com/viewsolution/41202737

#include <iostream>
using namespace std;

int main() {
	int t;
	int n,k,d,q,sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n>>k>>d;
	    while(n--)
	    {
	        cin>>q;
	        sum+=q;
	    }
	   q=sum/k;
	   if(q<d)
	    cout<<q;
	   else
	    cout<<d;
	    cout<<endl;
	}
	return 0;
}
