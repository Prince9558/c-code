#include<iostream>
using namespace std;
int main()
{
    enum days{sun,mon,tue,wed,thr,fri,sat};
	days day1,day2;
	day1=fri;
	day2=sun;
	cout<<day1<<"\t"<<day2<<endl;
	if(day1>day2)
	{
		cout<<"day1 comes after day2";
	}
	else
	{
		cout<<"day1 comes before day2";
		return 0;
	}
}
