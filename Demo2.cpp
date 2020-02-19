#include<iostream>
using namespace std;

class Demo
{
	int a;
	
	public:
	void get(int z);
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
	Demo obj1;
	int i;
	
	//cout<<"Enter the value";
	//cin>>b;
	obj1.get(8);
	obj1.show();
	
	return 0;
}

