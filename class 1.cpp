#include<iostream>
using namespace std;
int a = 10;    // global variable
int main ()
{
	{
	    int a = 20;
	}
	int a = 100;       // local variable
	cout<<"global value of a = "<<::a;
	cout<<"global value of a = "<<a;
}
