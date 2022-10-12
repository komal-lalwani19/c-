#include<iostream>
using namespace std;
class grandfather
{
	public:
		void print1()
		{
			cout<<"process of gf class\n";
		}
};
class father :public grandfather
{
	public:
		void print2()
		{
			cout<<"process of father class\n";
		}
};
class son: public father
{
	public:
		void print3()
		{
			cout<<"process of son class \n";
		}
};
int main()
{
son obj;
obj.print1();
obj.print2();
obj.print3();
}