#include<iostream>
using namespace std;

void example()
{
	int val[3] = { 5,10,20};
	int *ptr;
	ptr = val;
	cout<<"Elements of the array are: ";
	cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2];
}
int main() {
	example();
}

