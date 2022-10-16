#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"this is a vehicle \n";
			
		}
};
class fourwheeler
{
	public:
		fourwheeler()
	{
	cout<<"this is a 4 wheeler vehicle\n";
    }
};
class car: public fourwheeler, public vehicle
{
};
int main()
	{
		car obj;
		return 0;
	}
