// Problem Name : ATM
// Problem Code : HS08TEST
// Link         : https://www.codechef.com/viewsolution/35444339

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int X;
	float Y;
	cin>>X>>Y;
	if((X%5==0)  && (Y>=X+0.50))
	 Y=(Y-X-0.50);
    cout<<fixed<<setprecision(2)<<Y;
	return 0;
}