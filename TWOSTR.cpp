//Problem Name : Chef and the Wildcard Matching
//Problem Code : TWOSTR
//link         : https://www.codechef.com/viewsolution/35894731

#include <iostream>
#include <string>
using namespace std;

int main() {
    int i,j,flag,T;
    string x,y;
    cin>>T;
    for(i=0;i<T;++i)
    {
        cin>>x>>y;
        flag=0;
        for(j=0;j<x.length();++j)
        {
            if(x[j]!='?' && y[j]!='?')
            {
                if(x[j]!=y[j])
                 flag=1;
            }
            
        }
        if(flag==0)
         cout<<"Yes";
        else
         cout<<"No";
        cout<<endl;
    }

	return 0;
}
