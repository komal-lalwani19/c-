#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"this is vehicle \n";
		}
};
class car: public vehicle
{
	public:
		car()
		{
			cout<<"this is car \n";
		}
};
class racing
{
	public:
		racing()
		{
		cout<<"this is racing\n";
	    }
};
class ferrari:public car,public racing
{
	public:
		ferrari()
		{
			cout<<"this is racing car \n";
		}
};
int main()
{
	ferrari f;
	return 0;
}