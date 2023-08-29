#include<iostream>
using namespace std;

int main()
{
	int marks[9];
	
	for(int i=1;i<=10;i++)
	{
		cout<<"enter the marks of "<<i<<"th student :";
		cin>>marks[i];
	}
	for (int i=1;i<=10;i++)
	{
		cout<<"marks of "<<i<<"student is :"<<marks[i]<<endl;
	}
}
