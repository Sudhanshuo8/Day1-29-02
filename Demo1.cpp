#include<iostream>
using namespace std;

class Demo
{
	int a;
	
	public:
		void get();
		void show();
};

void Demo::get() 
{
	cout<<"Enter the value"<<endl;
	cin>>a;
}

void Demo::show()
{
	cout<<endl<<a;
}

int main()
{
	Demo obj1;
	obj1.get();
	obj1.show(); 
	
    return 0;
}
