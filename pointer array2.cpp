#include<iostream>
using namespace std;

int main()
{
	int records[] = { 2,3,4,5,8};
	int *ptr
	*ptr = records;
	cout<<"the value of first element is "<<*records<<endl;
	cout<<"the value of second element is "<<*(records+1)<<endl;
	cout<<"the value of third element is "<<*(records+2)<<endl;
	cout<<"the value of fourth element is "<<*(records+3)<<endl;
	cout<<"the value of fifth element is "<<*(records+4)<<endl;
}
