#include<iostream>
using namespace std;
class shape
{
	public:
		int a;
		int b;
		void get_data(int n,int m)
		{
			a=n;
			b=m;
		}
};
class rectangle: public shape
{
	public:
		int rec_area()
		{
			int result= a*b;
			cout<<"area of rectangle is:"<<result<<endl;
		}
};
class triangle: public shape
{
	public:
		int tri_area()
		{
			float result=0.5*a*b;
			cout<<"area of triangle is:"<<result<<endl;
		}
};
int main()
{
	rectangle r;
	r.get_data(2,4);
	r.rec_area();
	triangle t;
	t.get_data(5,6);
	t.tri_area();
	return 0;
}