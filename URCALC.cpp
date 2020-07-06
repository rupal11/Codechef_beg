// Problem Name : Program Your Own CALCULATOR 
// Problem Code : URCALC
// Link         : https://www.codechef.com/viewsolution/35230592

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    double a,b,result;
    char c;
    cin>>a>>b>>c;
    switch(c)
    {
        case '+' : result =a+b;
                   break;
        case '-' : result =a-b;
                   break;
        case '*' : result =a*b;
                   break;
        case '/' : result =a/b;
                   break;
    }
    cout<<fixed<<setprecision(6)<<result;
    
  
	return 0;
}
