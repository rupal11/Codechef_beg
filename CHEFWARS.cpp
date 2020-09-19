//Problem Name : Chef Wars - Return of the Jedi
//Problem Code : CHEFWARS
//link         : https://www.codechef.com/viewsolution/36290688

#include <iostream>
using namespace std;

int war(int h,int p)
{
    if(h<=0)
     return 1;
    if(p<=0)
     return 0;
    if(h>0 && p>0)
    return war(h-p,p/2);
}

int main() {
	int H,P,i,T,r;
	cin>>T;
	for(i=0;i<T;++i)
	{
	    cin>>H>>P;
	    r=war(H,P);
	    if(r==1)
	     cout<<"1";
	    else
	     cout<<"0";
	    cout<<endl;
	}
	return 0;
}
