#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout("r.txt");
	fout<<"Hello world!";
	fout.close();
	cout<<"Data Saved";
}
