//Problem Name : Coins And Triangle
//Problem Code : TRICOIN
//link         : https://www.codechef.com/viewsolution/35893901

#include <iostream>
using namespace std;

int main() {
    int T,n,i,j;
    cin>>T;
    for(i=0;i<T;++i)
    {
        cin>>n;
        j=0;
        while(n>j)
        {
            ++j;
            n-=j;
        }
        cout<<j<<endl;
    }
	
	return 0;
}