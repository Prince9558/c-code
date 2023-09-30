#include<iostream>
using namespace std;

void TOH (int n,char Sour, char Aux , char Des)
{
	if(n==1)
	{
		cout<<"Move disk "<< n << "from " <<Sour<<" to "<<Des<<endl;
		return;
	}
	TOH(n-1,Sour,Des,Aux);
	cout<<"Move disk "<< n << "from " <<Sour<<" to "<<Des<<endl;
	TOH(n-1,Sour,Des,Aux);
}
int main()
{
	int n;
	cout<<"enter no. of disk: ";
	cin>>n;
	TOH(n,'A','B','C');
	return 0;
}
