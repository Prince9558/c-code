#include<iostream>
using namespace std;
class abc{
	public:
		abc()  // constructor
		{
			cout<<"Constructor called "<<endl;
		}
		~abc()  //destructor
		{
			cout<<"Destructor called ";
		}
};
int main()
{
	abc obj;
}
