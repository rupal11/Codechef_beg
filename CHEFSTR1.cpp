// Problem Name : Chef and Strings
// Problem Code : CHEFSTR1 
// Link         : https://www.codechef.com/viewsolution/35225305

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    try
    {
	long int  i,j,T,n;
	cin>>T;
	vector<int> S[T];
	for(i=0;i<T;++i)
	{
	    int m;
	    cin>>n;
	    for(j=0;j<n;++j)
	    {
	        cin>>m;
	        S[i].push_back(m);
	    }
	    
	}
	for(i=0;i<T;++i)
	{
	    n=0;
	    for(j=0;j<S[i].size()-1;++j)
	    {
	        if(S[i][j+1]!=S[i][j])
	         n+=abs(S[i][j+1]-S[i][j])-1;
	    }
	   cout<<n<<"\n"; 
	}
    }
     catch (...)  { 
     }
	
	return 0;
}

