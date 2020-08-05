// Problem Name : Bear and Candies 123
// Problem Code : CANDY123
// Link         : https://www.codechef.com/viewsolution/35918417

#include <iostream>
using namespace std;

int main() {
	int i,j,a,b,T;
	cin>>T;
	for(i=0;i<T;++i)
	{
	    cin>>a>>b;
	    j=1;
	    while(a>=0 && b>=0)
	    {
	        if(j%2==0)
	         b-=j;
	        else
	         a-=j;
	        ++j;
	    }
	    if(a<0)
	     cout<<"Bob";
	    else
	     cout<<"Limak";
	    cout<<endl;
	}
	return 0;
}
