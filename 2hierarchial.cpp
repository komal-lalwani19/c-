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
class car:public vehicle
{
	public:
		car()
		{
			
		}
};
class bus:public vehicle
{
	public:
		bus()
		{
			
		}
};
int main()
{
	car obj1;
	bus obj2;
	return 0;
}