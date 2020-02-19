#include<iostream>
using namespace std;

class Demo
{
	int a;
	public:
	int get();
	void show();
};

int Demo::get()
{
	cout<<"Enter the value";
	cin>>a;
	//return a;
}

void Demo::show()
{
	cout<<a;
}

int main()
{
  Demo obj;
  obj.get();
  obj.show();
}
