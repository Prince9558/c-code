#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int age = 22 , rollno = 910;
	cout<<setfill('+');
	cout<<setw(5)<<age<<setw(6)<<rollno<<endl;
	cout<<setw(6)<<age<<setw(8)<<rollno;
	return 0;
}
