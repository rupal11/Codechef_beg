// Problem Name : Gross Salary
// Problem Code : FLOW011
// Link         : https://www.codechef.com/viewsolution/35397629

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i,T;
	cin>>T;
	double Basic_salary,HRA,DA,Gross_salary;
	for(i=0;i<T;++i)
	{
	    cin>>Basic_salary;
	    if(Basic_salary<1500)
	    {
	        HRA=Basic_salary/10;
	        DA=(Basic_salary*9)/10;
	    }
	    else 
	    {
	        HRA=500;
	        DA=(Basic_salary*98)/100;
	    }
	    Gross_salary=Basic_salary+HRA+DA;
	    cout<<fixed<<setprecision(2)<<Gross_salary<<"\n";
	}
	return 0;
}
