#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if(n==0 && n<=9)
	{
		const char* words[] ={"zero","one","two","three","four","five","six","seven","eight","nine"};
		cout<<words[n]<<endl;
	}
	else{
		cout<<"greater than 9";
	}
	return 0;
}
