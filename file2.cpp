#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int rollno;
char name[10];
ofstream ofil("student.txt",ios::app);
cout<<"enter details roll no and name ...";
cin>>rollno>>name;
cout<<"writing student details into file..";
ofil<<rollno<<endl;
return 0;
}
