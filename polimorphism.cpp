#include<iostream>
using namespace std;
class base{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
		void getA()
		{
			cout<<"Enter the value of A: ";
			cin>>a;
			cout<<"A = "<<a<<endl;
		}
};
class derived : public base{
	public:
		void getData()
		{
			cout<<"Enter the value of B and C: ";
			cin>>b>>c;
			cout<<"B = "<<b<<" C = "<<c<<endl;
			
		}
};
int main()
{
	derived obj;
	obj.getA();
	obj.getData();
}
