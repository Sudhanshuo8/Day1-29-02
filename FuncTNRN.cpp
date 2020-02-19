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
