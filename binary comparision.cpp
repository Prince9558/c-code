#include<iostream>
using namespace std;
class comparision {
	int a;
	public:
		comparision() 
		{a=0;}
		comparision (int s)
		{a=s;}
		void operator == (comparision x)
		{
			if(a==x.a)
			cout<<"both are equal"<<endl;
			else
			cout<<"not equal"<<endl;
		}
		void operator > (comparision x)
		{
			if(a>x.a)
			cout<<"first is bigger"<<endl;
			else
			cout<<"second is bigger"<<endl;
		}
		void operator < (comparision x)
		{
			if(a<x.a)
			cout<<"first is smaller"<<endl;
			else
			cout<<"second is smaller"<<endl;
		}
		void operator != (comparision x)
		{
			if(a!=x.a)
			cout<<"both are not equal"<<endl; 
			else
			cout<<"both are equal"<<endl;
		}
};
main()
{
	comparision x1(2), x2(6);
	x1>x2;
	x1<x2;
	x1==x2;
	x1!=x2;
}
