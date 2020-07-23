//Problem Name : Studying Alphabet
//Problem Code : ALPHABET
//link         : https://www.codechef.com/viewsolution/35807236

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,w;
    int n,i,j,k,count;
	cin>>s;
	cin>>n;
	for(i=0;i<n;++i)
	{
	    cin>>w;
	    count=0;
	    for(j=0;j<w.length();++j)
	    {
	        for(k=0;k<s.length();++k)
	         if(w[j]==s[k])
	          count++;
	    }
	    if(count==w.length())
	     cout<<"Yes";
	    else
	     cout<<"No";
	    cout<<endl;
	}

	return 0;
}
