#include<iostream>
using namespace std;
class operation
{
	int a,b,add;
	public:
		void get()     //inline member function
		{
			cout<<"enter first value : ";
			cin>>a;
			cout<<"enter second value :";
			cin>>b;
		}
		void sum();
			
}s;
inline void operation :: sum()
{
	add=a+b;
	cout<<"Addition of two numbers : "<<a+b;
}
int main()
{
cout<<"program using inline function  \n";
s.get();
s.sum();
return 0;	
}
