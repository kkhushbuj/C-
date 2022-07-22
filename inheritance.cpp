#include<iostream>
using namespace std;
class parent
{
	public : void get()
	{
		cout<<"parents class"<<endl;
	}
};
class children : public parent
{
	public : void set()
	{
		cout<<"child class"<<endl;
	}
};
main()
{
	children obj;
	obj.set();
    obj.get();
}
