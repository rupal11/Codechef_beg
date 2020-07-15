// Problem Name : Mahasena
// Problem Code : AMR15A 
// Link         : https://www.codechef.com/viewsolution/35444680

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a,i,n,x=0,y=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a;
        if(a%2==0)
         ++x;
        else
         ++y;
    }
    if(x>y)
     cout<<"READY FOR BATTLE";
    else
     cout<<"NOT READY";

	return 0;
}