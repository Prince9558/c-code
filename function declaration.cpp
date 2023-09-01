#include<iostream>
using namespace std;
void sum();  // function prototype/declaration
int main()
{
	sum();  // function call
}
void sum()     // function definition
{
	int num1,num2,add=0;
	cout<<"Enter num1 and num2 : ";
	cin>>num1>>num2;
	add = num1 + num2;
	cout<<"\n"<<"sum :"<<add;
}

