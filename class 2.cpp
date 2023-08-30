#include<iostream>
using namespace std;
class book{
	int bookid;
	string name;
	string author;
	public:
	void getdata();
	void showdata()
	{
		cout<<"Entered details are : "<<endl;
		cout<<"book id  : "<<bookid<<endl;
		cout<<"book name : "<<name<<endl;
		cout<<"book author : "<<author<<endl;
	}
};
void book::getdata()
{
	cout<<"enter the book id : ";
	cin>>bookid;
	cout<<"enter the name of book : ";
	cin>>name;
	cout<<"enter the name of book's author : ";
	cin>>author;
}
int main()
{
	book obj;
	obj.getdata();
	obj.showdata();
}
