//Problem Name : Two vs Ten 
//Problem Code : TWOVSTEN
//link         : https://www.codechef.com/viewsolution/35873875

#include <iostream>
using namespace std;

int main() {
	int i,y,T;
	long int x; 
	cin>>T;
	for(i=0;i<T;++i)
	{
	    cin>>x;
	    y=0;
	    while(x%10 != 0)
	    {
	        x*=2;
	        y++;
	        if(y>=15)
	        {
	            y=-1;
	            break;
	        }
	    }
	    cout<<y<<endl;
	}
	return 0;
}