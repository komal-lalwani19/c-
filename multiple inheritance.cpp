#include<iostream>
using namespace std;
class base1
{
	protected:
		int a;
		public:
			void get_a(int n)
			{
				a=n;
			}
};
class base2
{
	protected:
		int b;
		public:
			void get_b(int n)
			{
				b=n;
			}
};
class derive: public base1, public base2
{
	public:
		void display()
		{
			std::cout<<"the value of a is:"<<a<<std::endl;
			std::cout<<"the value of b is:"<<b<<std::endl;
			cout<<"addition  of a and b is:"<<a+b;
		}
};
int main()
{
	derive d;
	d.get_a(10);
	d.get_b(20);
	d.display();
}