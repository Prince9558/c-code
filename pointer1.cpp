#include<iostream>
using namespace std;
int main()
{
    int num[]={56,75,22,18,90};
    int *ptr;
    int i;
    cout<<"the array values are: ";
    for(i=0;i<5;i++)
    cout<<num[i]<<endl;
    ptr=num;
    cout<<"value pf ptr num : "<<*ptr++<<endl;
    *ptr++;
    cout<<"value of ptr++ : "<<*ptr<<endl;
    ptr--;
    cout<<"value of ptr-- : "<<*ptr<<endl;
}
