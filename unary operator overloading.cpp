#include<iostream>
using namespace std;

class Weight {
	private:
		int kg;
	public:
		weight() {
			kg = 0;
		}
		weight(int x) {
			kg = x;
		}
		void printWeight() {
			cout<<"Weight in KG : "<<kg <<endl;
		}
		void operator ++() {
			++kg;
		}
};
int main() 
{
	Weight obj;
	obj.printWeight();
	++obj;
	obj.printWeight();
	return 0;
}
