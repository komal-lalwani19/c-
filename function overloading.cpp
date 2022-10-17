#include<iostream>
using namespace std;
class addition
{
	public:
		void sum(int a, int b)
		{
			cout<<a+b;
		}
		void sum(int a,int b,int c)
		{
			cout<<a+b+c;
		}
};
int main()
{
	addition obj;
	obj.sum(10,20);
	cout<<endl;
	obj.sum(10,20,30);
}