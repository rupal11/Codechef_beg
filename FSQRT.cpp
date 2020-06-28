//Problem Name : Finding Square Roots
//Problem Code : FSQRT
//link         : https://www.codechef.com/viewsolution/34710440

#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int T,i;
    float sroot;
    cin>>T;
    int n[T];
    for(i=0;i<T;++i)
     cin>>n[i];
    for(i=0;i<T;++i)
    {
        sroot=sqrt(n[i]);
        cout<<round(sroot)<<"\n";
    }
	
	return 0;
}