// Problem Name : Tanu and Head-bob
// Problem Code : HEADBOB
// Link         : https://www.codechef.com/viewsolution/35543042

#include <iostream>
#include <string>
using namespace std;

int main() {
    int i,n,T;
    cin>>T;
    for(i=0;i<T;++i)
    {
        cin>>n;
        string a;
        cin>>a;
        if (a.find('I') != string::npos) 
         cout<<"INDIAN";
        else if (a.find('Y') != string::npos) 
          cout<<"NOT INDIAN";
        else 
        cout<<"NOT SURE";
        cout<<"\n";
    }

	return 0;
}
