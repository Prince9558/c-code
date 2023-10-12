#include<iostream>
using namespace std;

int main() {
	int a = 50;
	int *ptr;
	
	ptr = &a;
	cout<<"The value of *ptr is "<<*ptr<<endl;
}
