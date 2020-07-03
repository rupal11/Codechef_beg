// Problem Name : Sum OR Difference
// Problem Code : DIFFSUM
// Link         : https://www.codechef.com/viewsolution/34937065

#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2;
    if(n1>n2)
     cout<<n1-n2;
    else
    cout<<n1+n2;
	return 0;
}
