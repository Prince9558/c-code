#include<iostream>
using namespace std;

class Coordinates
{
	public:
		int X,Y;
	Coordinates(int x, int y)
	{
		this->X=x;
		this->Y=y;
	}
	void operator-()
	{
		X--;
		Y--;
		cout<<"\n Decremented X & Y are : "<<X << " and "<<Y<<endl;
	}
};
int main() 
{
	Coordinates C(11,13);
	-C;
	return 0;
}
