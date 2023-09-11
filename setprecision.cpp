#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a = 129.455396;
    cout<<setprecision(6)<<a<<endl;
    cout<<setprecision(2)<<a<<endl;
	cout<<fixed<<setprecision(2)<<a<<endl;
	return 0;
}

