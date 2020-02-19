#include<iostream>
using namespace std;

class Demo
{
	int a;
	public:
	int get(int );
	void show();
};

int Demo::get(int i)
{
	a=i;
	
	//return a;
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
