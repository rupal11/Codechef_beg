//Problem Name : Chef And Coloring
//Problem Code : COLOR
//link         : https://www.codechef.com/viewsolution/35918117

#include <iostream>
#include <string>
using namespace std;

int main() {
	int i,j,n,T,largest;
	cin>>T;
	string s;
	for(i=0;i<T;++i)
	{
	    cin>>n;
	    cin>>s;
	    int x=0,y=0,z=0;
	    for(j=0;j<s.length();++j)
	    {
	        if(s[j]=='R')
	         ++x;
	        else if(s[j]=='B')
	         ++y;
	        else
	         ++z;
	    }
	    largest=x>y?x>z?x:z:y>z?y:z;
	    cout<<s.length()-largest<<endl;
	}
	return 0;
}



