// Problem Name : Area OR Perimeter
// Problem Code : AREAPERI
// Link         : https://www.codechef.com/viewsolution/34937369

#include <iostream>
using namespace std;

int main() {
    int L,B,Area,Peri;
    cin>>L>>B;
    Area=L*B;
    Peri=2*(L+B);
    if(Area==Peri)
     cout<<"Eq\n"<<Area;
    else if(Area>Peri)
     cout<<"Area \n"<<Area;
    else 
     cout<<"Peri\n"<<Peri;
  
	return 0;
}
