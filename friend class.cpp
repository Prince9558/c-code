#include<iostream>
using namespace std;
class ABC
{
	private:
		int priVar;
	protected:
		int pvar;
	public:
		ABC()
		{
			priVar = 10;
			pvar = 99;
		}
	    friend class F;
};
class F{
	public:
		void display(ABC t)
{
	cout<<"The value of private variable ="<<t.priVar<<endl;
	cout<<"The value of protected variable = "<<t.pvar;
}
};
int main()
{
	ABC obj;
	F fri;
	fri.display(obj);
	return 0;
	
}
