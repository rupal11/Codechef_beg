// Problem Name : Id and Ship
// Problem Code : FLOW010
// Link         : https://www.codechef.com/viewsolution/35305138

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int T,i;
	cin>>T;
	char ch,n[T];
	for(i=0;i<T;++i)
	 cin>>n[i];
	for(i=0;i<T;++i)
	{
	    ch=tolower(n[i]);
	    switch(ch)
	    {
	        case 'b' : cout<<"BattleShip";
	                   break;
	        case 'c' : cout<<"Cruiser";
	                   break;
	        case 'd' : cout<<"Destroyer";
	                   break;
	        case 'f' : cout<<"Frigate";
	                   break;
	    }
	    cout<<endl;
	}
	
	return 0;
}