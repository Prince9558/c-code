#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a positive integer to find a factorial: ";
	cin>>n;
	cout<<"Factorial of n is: ";
	cout<<multiplyNumbers(n);
	return 0;
}
long int multiplyNumbers(int n)
{
	if (n>= 1)
	return n*multiplyNumbers(n-1);
}
