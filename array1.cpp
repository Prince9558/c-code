#include<iostream>
using namespace std;
class employee 
{
	char name[50];
	int age ; 
	public:
		void getdata(void);
		void putdata(void);
};
void employee::getdata(void)
{
	cout<<"\n Enter the name of employee : ";
	cin>>name;
	cout<<"\n Enter rhe age of employee : ";
	cin>>age;
}
void employee::putdata(void)
{
	cout<<"\n Enter the name of employee : ";
	cin>>name;
	cout<<"\n Enter rhe age of employee : ";
	cin>>age;
}
const int size = 3;
int main()
{
	employee emp[size];
	int i; 
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter details of employee number"<<i+1;
		emp[i].getdata();
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nDetails of the employee number"<<i+1;
		emp[i].putdata();
	}
	return 0 ;
}
