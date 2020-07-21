// Problem Name : Grade The Steel
// Problem Code : FLOW014
// Link         : https://www.codechef.com/viewsolution/35651103

#include <iostream>
using namespace std;

int main() {
	int i,T,grade=0;
	int hardness,tensile_st;
	float carbon_con;
	cin>>T;
	for(i=0;i<T;++i)
	{
	    cin>>hardness>>carbon_con>>tensile_st;
	    if(hardness>50 && carbon_con<0.7 && tensile_st>5600)
	     grade=10;
	    else if (hardness>50 && carbon_con<0.7)
	     grade=9;
	    else if (tensile_st>5600 && carbon_con<0.7)
	     grade=8;
	    else if (tensile_st>5600 && hardness>50)
	     grade=7;
	    else if ((hardness>50 || carbon_con<0.7 || tensile_st>5600))
	     grade=6;
	    else 
	     grade=5;
	    cout<<grade<<"\n";
	}
	return 0;
}
