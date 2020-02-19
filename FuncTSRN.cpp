#include<iostream>
using namespace std;

class Demo
{
	int a;
	public:
	void get(int );
	void show();
};

void Demo::get(int i)
{
	a=i;
}

void Demo::show()
{
	cout<<a;
}

int main()
{
  Demo obj;
  obj.get(8);
  obj.show();
}
