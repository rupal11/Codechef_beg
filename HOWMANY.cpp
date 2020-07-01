//Problem Name : HOW MANY DIGITS DO I HAVE
//Problem Code : HOWMANY
//link         : https://www.codechef.com/viewsolution/34748794

#include <iostream>
using namespace std;

int main() {
    int n,i,count=0;
    cin>>n;
	     
	while(n)
	 {
	   count++;
	   n=n/10;
	 }
	 if(count==1 || count==2 || count==3)
	   cout<<count<<"\n";
	  else 
	    cout<<"More than 3 digits \n";
	return 0;
}
