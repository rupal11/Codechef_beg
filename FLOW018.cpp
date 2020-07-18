// Problem Name : Small Factorial 
// Problem Code : FLOW018
// Link         : https://www.codechef.com/viewsolution/35541786

#include <iostream>
using namespace std;

unsigned long int factorial ( int n)
{
   int i;
   unsigned long int fact=1;
   for(i=1;i<=n;++i)
       fact*=i;
    return fact;
 
}

int main() {
  int t,i;
  cin>>t;
  int n[t];
  for(i=0;i<t;++i)
   cin>>n[i];
  for(i=0;i<t;++i)
      cout<<factorial(n[i])<<"\n";
	return 0;
}