//Problem Name : Kitchen Timetable
//Problem Code : KTTABLE
//link         : https://www.codechef.com/viewsolution/35874099

#include <iostream>
using namespace std;

int main() {
    int i,j,n,T,count;
    cin>>T;
    for(i=0;i<T;++i)
    {
        cin>>n;
        int a[n],b[n],D[n];
        count=0;
        for(j=0;j<n;++j)
        {
           cin>>a[j];
           if(j==0)
            D[j]=a[j];
           else
            D[j]=a[j]-a[j-1];
        }
        for(j=0;j<n;++j)
         cin>>b[j];
        for(j=0;j<n;++j)
        {
             if(D[j]>=b[j])
              count++;
        }
        cout<<count<<endl;
    }

	return 0;
}
