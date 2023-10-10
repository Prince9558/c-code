#include<iostream>
using namespace std;
class A {
	public:
		void show(){
			cout<<"class A called \n";
		}
};
class B : public A{
	public:
		void show()
		{
			cout<<"class B called";
		}
};
int main()
{
	B obj;
	obj.A::show();
	obj.show();
}
