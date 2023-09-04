#include<iostream>
using namespace std;
main()
{
	string s1 ("12345");
	string s2("abcde");
	s1.insert(4, s2);
	cout<<"Insert s1 = "<<s1<<endl;
	s1.erase(4,5);
	cout<<"Erase S1 = "<<endl;
	s2.replace(1,3, s1);
	cout<<"Replace S2 = "<<s2<<endl;
	s2.append(s1,2,3);
	cout<<"Append s2 = "<<s2<<endl;
	return 0;
}
