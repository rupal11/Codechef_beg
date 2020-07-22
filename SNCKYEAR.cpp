// Problem Name : Chef and SnackDown
// Problem Code : SNCKYEAR
// Link         : https://www.codechef.com/viewsolution/35712505

#include <iostream>
using namespace std;

int main() {
    int n,T;
    cin>>T;
    for(int i=0;i<T;++i)
    {
        cin>>n;
        switch(n)
        {
            case 2010 :
            case 2015 :
            case 2016 :
            case 2017 :
            case 2019 : cout<<"HOSTED\n";
                        break;
            default   : cout<<"NOT HOSTED\n";
        }
    }

	return 0;
}
