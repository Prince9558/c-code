 #include<iostream>
using namespace std;
class employee{
	private:
	    int empId;    // data member
	    string name;
	    double salary;
	public:
	    void getdata()     // member function
	    {
	    	cout<<"Enter the empId : ";
	    	cin>>empId;
	    	cout<<"\n Enter the name of employee : ";
	    	cin>>name;
	    	cout<<"\n Enter the salary :";
	    	cin>>salary;
		}
		void showdata()
		{
			cout<<"Entered details are : "<<endl;
			cout<<"Emp Id : "<<empId<<endl;
			cout<<"Emp Name : "<<name<<endl;
			cout<<"Salary : "<<salary;
		}
	
};
int main()
{
	employee objEmp;
	objEmp.getdata();
	objEmp.showdata();
}
