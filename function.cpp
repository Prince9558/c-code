#include<iostream>
using namespace std;

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int a,b;
	cout<<"first number is :";
	cin>>a;
	
	cout<<"second number is :";
	cin>>b;
	
	cout<<"the sum is :"<<add(a,b);
	return 0;
}
