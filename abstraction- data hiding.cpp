#include<iostream>
using namespace std;
class car
{
	public:
		void model()
		{
			cout<<"volvo x90"<<endl;
		}
		void color()
		{
			cout<<"matte black"<<endl;
		}
		void fuel()
		{
			cout<<"petrol"<<endl;
		}
	private:
			void engine()
		{
		}
};
int main()
{
	car c1;
	c1.color();
}
