#include<iostream>
using namespace std;
class CRectangle
{
	int width , height;
	public:
		void setValues (int , int);
		int area (void)
		
		{
		return (width * height);}
};
void CRectangle :: setValues(int a , int b)
{
	width = a;height = b;
}
int main()
{
	CRectangle a ,*b;
	b = a;
	a.setValues(1,2);
	cout<<"a area : "<<a.area() <<endl;
	
	b->setValues(3,4);
	cout<<"a area : "<<a.area() <<endl;
	cout<<"b area : "<<b->area() <<endl;
	cout<<"address of a :"<<b;
}
